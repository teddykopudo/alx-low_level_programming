#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int a;
	if (n < 0)
	n = -1;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
