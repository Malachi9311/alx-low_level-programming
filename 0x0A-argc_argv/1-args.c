#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array pointing to argujments
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", argc);
	return (0);
}
