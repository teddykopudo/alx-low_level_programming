#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9
 * return : void
 */
void print_numbers(void)
{
	int num = 0;

		while (num < 10)
		{
			_putchar(num + '0');
			num += 1;
		}
	_putchar('\n');
}
