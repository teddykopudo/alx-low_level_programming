#include "main.h"

/**
 * print_number - prints an integer
 * @n: insert number
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1, n2;
	int t;
	int aux = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	n1 = n;
	n2 = n1;
	if (n1 > 9)
	{
		while (n1 >= 10)
		{
			aux = aux * 10;
			n1 = n1 / 10;
		}
		_putchar((n2 / aux) + '0');
		aux = aux / 10;

		for (t = aux; t >= 1; t = t / 10)
			_putchar((n2 / t) % 10 + '0');
	}
	else
		_putchar(n1 + '0');
}
