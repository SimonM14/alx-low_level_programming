#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int a, b, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
