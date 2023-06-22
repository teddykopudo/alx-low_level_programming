#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: insert number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int t, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= n; t++)
		{
			for (k = 1; k < t; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
