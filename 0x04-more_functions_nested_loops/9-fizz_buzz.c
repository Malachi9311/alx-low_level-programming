#include <stdio.h>

/**
 * main - print fizz buzz
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("fizzbuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("buzz ");
		}
		else
			printf("%d ", n);
	}
	return (0);
}
