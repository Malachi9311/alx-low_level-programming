#include "main.h"

/**
 * print_triangle -prints a triangle
 * @n: size of the triangle
 * Return: empty
 */

void print_triangle(int n)
{
	int i;
	int j;
	int k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			if (i == n)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
