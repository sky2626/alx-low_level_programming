#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sky = 0;

	while (sky < 48)
	{
		if (sky < 10)
			putchar(i + '0');
		else if (sky > 41)
			putchar(i - 10 + 'A');
		sky++;
	}
	putchar(10);

	return (0);
}
