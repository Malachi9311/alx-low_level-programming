#include "main.h"

/**
 * _memcpy - entry point
 * @dest: copy to
 * @src: copy from
 * @n: input
 * Return: Destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
