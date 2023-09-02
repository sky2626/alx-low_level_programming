#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of y to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int x, y = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	while (x > 0)
	{
		y++;
		if ((x - 25) >= 0)
		{
			x -= 25;
			continue;
		}
		if ((x - 10) >= 0)
		{
			x -= 10;
			continue;
		}
		if ((x - 5) >= 0)
		{
			x -= 5;
			continue;
		}
		if ((x - 2) >= 0)
		{
			x -= 2;
			continue;
		}
		x--;
	}

	printf("%d\n", y);

	return (0);
}
