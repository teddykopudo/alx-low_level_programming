#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int count = 0, t;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		t = count / 2;
	else
		t = (count - 1) / 2;

	for (t++; t < count; t++)
		_putchar(str[t]);
	_putchar('\n');
}
