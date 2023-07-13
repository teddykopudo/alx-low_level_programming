#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each element in the array
 *
 * Return: a pointer to the allocated memory or NULL on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
