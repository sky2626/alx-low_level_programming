
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @a: The string to be copied.
 *
 * Return: If a == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *a)
{
	char *duplicate;
	int index, len = 0;

	if (a == NULL)
		return (NULL);

	for (index = 0; a[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; a[index]; index++)
		duplicate[index] = a[index];

	duplicate[len] = '\0';

	return (duplicate);
}
