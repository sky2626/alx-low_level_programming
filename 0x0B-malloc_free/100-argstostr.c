#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @x: The number of arguments passed to the program.
 * @y: An array of pointers to the arguments.
 *
 * Return: If x == 0, y == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int x, char **y)
{
	char *str;
	int arg, byte, index, size = x;

	if (x == 0 || y == NULL)
		return (NULL);

	for (arg = 0; arg < x; arg++)
	{
		for (byte = 0; y[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < x; arg++)
	{
		for (byte = 0; y[arg][byte]; byte++)
			str[index++] = y[arg][byte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
