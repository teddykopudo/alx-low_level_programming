#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int t = 0;

	while (t >= 0)
	{
		if (str[t] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (t % 2 == 0)
			_putchar(str[t]);
		t++;
	}
}
