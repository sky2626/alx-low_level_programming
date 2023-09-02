#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bass;

	for (bass = 0; bass < argc; bass++)
		printf("%s\n", argv[bass]);

	return (0);
}
