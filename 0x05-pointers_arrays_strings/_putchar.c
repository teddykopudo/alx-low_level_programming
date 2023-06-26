#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: 1 one success
 * On error: -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
