#include "main.h"

/**
 * print_line - draws a line in the terminal thats n line
 * @n: length of line to be drawn
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
