#include "mainOBn.h"

/**
 * _puts - Prints a string to stdout.
 *  The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
