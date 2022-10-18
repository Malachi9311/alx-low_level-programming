#include "main.h"
/**
 * _islower - checks if character is lower case
 * @c: character to be checked
 * Return: alwys 1 if lower case, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
