#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z' || ch != 'e' || ch != 'q')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
