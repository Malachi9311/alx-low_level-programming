#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 0;
	int n;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argv[i]; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (!*p)
				result += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
