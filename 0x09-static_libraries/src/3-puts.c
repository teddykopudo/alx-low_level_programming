#include "main.h"

/**
 * _puts - prints a string
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
        int t = 0;

        while (str[t])
        {
                _putchar(str[t]);
                t++;
        }
        _putchar('\n');
}
