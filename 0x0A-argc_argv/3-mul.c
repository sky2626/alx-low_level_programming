#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int oneNum, twoNum, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	oneNum = atoi(argv[1]);
	twoNum = atoi(argv[2]);
	mult = oneNum * twoNum;

	printf("%d\n", mult);

	return (0);
}
