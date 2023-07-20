#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function
 *
 * Description: If separator is NULL, don’t print it.
 *              Print a new line at the end of your function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int number;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(numbers, int);

		if (number == 0)
		{
			printf("0");
		}
		else
		{
			printf("%d", number);
		}

		if (i + 1 != n)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(numbers);
}
