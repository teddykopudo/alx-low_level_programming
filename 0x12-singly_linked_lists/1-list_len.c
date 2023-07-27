#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the singly linked list.
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t nelem = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}

	return (nelem);
}
