#include "main.h"

/**
 * get_endianness - Checks the endianness of the architecture.
 *
 * Return: 0 if big endian, 1 if little endian, -1 on failure.
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *)&x;

	if (*c == 1)
		return (1);
	else if (*c == 0)
		return (0);

	return (-1);
}
