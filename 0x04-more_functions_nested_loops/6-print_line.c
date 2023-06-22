#include "main.h"

/**
 * print_line - prints a line
 * @n: input number of times to print '_'
 * Return: straight line
 */
void print_line(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= n; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
