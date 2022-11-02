#include "main.h"

/**
 * sqrt_loop - finds natural square roots, if they exist
 * @n: varialbe holding potential square root
 * @m: variable of original inputted value
 * Return: natural square root if it exists, or -1 if it doesnt exist
 */

int sqrt_loop(int m, int n)
{
	if (n == m * m)
	{
		return (n / m);
	}
	else if (n < m * m)
	{
		return (-1);
	}
	else
	{
		return (sqrt_loop(m + 1, n));
	}
}

/**
 * _sqrt_recursion - entry
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (sqrt_loop(1, n));
}
