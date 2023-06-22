#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: 0.
 */

void more_numbers(void)
{
	int t, k;

	for (t = 0; t < 10; t++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
