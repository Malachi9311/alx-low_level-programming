#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: input
 * @size: input
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int n;
	int t1 = 0;
	int t2 = 0;

	for (i = 0; i <= (size * size); i++)
	{
		t1 = t1 + a[i];
	}

	for (n = size - 1; n <= (size * size); n = n + size - 1)
	{
		t2 = t2 + a[n];
	}
	printf("%d, %d\n", t1, t2);
}
