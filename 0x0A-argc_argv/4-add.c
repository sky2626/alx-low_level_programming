#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int number, dig, addAll = 0;

	for (number = 1; number < argc; number++)
	{
		for (dig = 0; argv[number][dig]; dig++)
		{
			if (argv[number][dig] < '0' || argv[number][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		addAll += atoi(argv[number]);
	}

	printf("%d\n", addAll);

	return (0);
}
