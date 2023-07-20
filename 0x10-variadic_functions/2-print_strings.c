#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Prints strings
 * @separator: The string to be printed
 * @n: The number of strings
 * Description: If separator is NULL, don’t print it.
 *              If one of the strings is NULL, print (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	if (separator == NULL)
{
		separator = "";
}

	va_start(string, n);

	for (i = 0; i < n; i++)
{
		str = va_arg(string, char *);

	if (str == NULL)
{
		printf("(nil)");
}
	else
{
		printf("%s", str);
}

		if (separator != NULL && i < n - 1)
{
			printf("%s", separator);
}
}

	va_end(string);

	printf("\n");
}
