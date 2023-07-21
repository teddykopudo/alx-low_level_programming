#include <stdio.h>
#include <stdarg.h>

/**
 * op_c - Print character.
 * @form: va_list containing the character to print.
 */
void op_c(va_list form)
{
	printf("%c", va_arg(form, int));
}

/**
 * op_i - Print Integer.
 * @form: va_list containing the integer to print.
 */
void op_i(va_list form)
{
	printf("%i", va_arg(form, int));
}

/**
 * op_f - Print Float numbers.
 * @form: va_list containing the float number to print.
 */
void op_f(va_list form)
{
	printf("%f", va_arg(form, double));
}

/**
 * op_s - Print string.
 * @form: va_list containing the string to print.
 */
void op_s(va_list form)
{
	char *str = va_arg(form, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything based on the format string.
 * @format: The format string containing the types of arguments.
 *
 * Description: c: char, i: integer, f: float, s: char* (if NULL, print (nil)).
 * Any other character should be ignored.
 * Print a new line at the end of your function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	void (*fptr)(va_list);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			fptr = op_c;
		else if (format[i] == 'i')
			fptr = op_i;
		else if (format[i] == 'f')
			fptr = op_f;
		else if (format[i] == 's')
			fptr = op_s;
		else
		{
			i++;
			continue;
		}

		printf("%s", separator);
		separator = ", ";

		fptr(args);
		i++;
	}

	printf("\n");
	va_end(args);
}
