#include "main.h"

/**
 * print_square - that prints a square, followed by a new line
 * @size: size of the printed square in length and width
 * Return: square made of '#'
 */
void print_square(int size)
{
	int t, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= size; t++)
		{
			_putchar('#');
			for (k = 2; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
