#include "main.h"
/**
 * _isalpha - checks if c is alphabet
 * @c: is the character c
 * Return: 1 if alphabet 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
