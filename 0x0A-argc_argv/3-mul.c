#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc < 3)
	{
		printf("%s\n", "Error");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result)
	}
	return (0);
}
