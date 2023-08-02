#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely, handling loops.
 * @h: Pointer to the pointer of the head of the list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *current = *h;
	listint_t *temp;

	if (*h == NULL)
		exit(98);

	while (current != NULL)
	{
		nodes++;
		temp = current->next;
		free(current);
		current = temp;
	}

	*h = NULL;
	return (nodes);
}

