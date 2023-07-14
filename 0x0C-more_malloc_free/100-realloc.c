#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:pointer to previously allocated memory
 * @old_size:size in bytes of allocated space for ptr
 * @new_size:new size in bytes of new memory block
 * Return: ptr
 * if new_size == old_size, return ptr without any changes
 * if malloc fails, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == 0)
{
	free(ptr);
	return (NULL);
}

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == old_size)
	return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	return (NULL);

	if (old_size <= 0)
{
	copy_size = 0;
}
	else
{
	copy_size = 0;
}

	memcpy(new_ptr, ptr, copy_size);
	free(ptr);

	return (new_ptr);
}
