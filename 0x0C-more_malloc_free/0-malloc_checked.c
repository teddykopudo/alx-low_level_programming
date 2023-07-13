#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes
 * Return: pointer to the allocated memory
 * on fail,normal process termination with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
