#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between the numbers.
 * @n: The number of numbers passed to the function.
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
		separator = "";

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(numbers, int);

		if (i == n - 1) /* Check if it's the last number */
			printf("%d", number);
		else
			printf("%d%s", number, separator);
	}

	printf("\n");
	va_end(numbers);
}

/**
 * print_strings - Prints strings.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Description: If separator is NULL, don’t print it.
 *              If one of the strings is NULL, print (nil) instead.
 *              Print a new line at the end of your function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("%s(nil)", separator);
		else
			printf("%s%s", separator, str);

		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}

/**
 * print_all - Prints anything based on the format string.
 * @format: The format string containing the types of arguments.
 *
 * Description: c: char, i: integer, s: char* (if NULL, print (nil)).
 * Any other character should be ignored.
 * Print a new line at the end of your function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *separator = "";

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}

		separator = ", ";
	}

	printf("\n");
	va_end(args);
}
