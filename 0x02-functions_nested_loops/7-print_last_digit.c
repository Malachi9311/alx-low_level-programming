#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: va lue of the last digit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i *= -1;

	_putchar(i + '0');
	return (0);
}