#include "main.h"

/**
 * print_rev - prints a string in reverse order.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int t = 0;

	while (t >= 0)
	{
		if (s[t] == '\0')
			break;
		t++;
	}

	for (t--; t >= 0; t--)
		_putchar(s[t]);
	_putchar('\n');
}
