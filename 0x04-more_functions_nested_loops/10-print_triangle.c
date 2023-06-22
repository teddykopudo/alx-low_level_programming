#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the printed triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int t, k;

	if (size > 0)
		for (t = size; t > 0; t--)
		{
			for (k = 1; k <= size; k++)
				if (k >= t)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
