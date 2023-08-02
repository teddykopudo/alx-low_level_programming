#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Double pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;

		if (current == *head)
		{
			*head = NULL;
			return;
		}
	}

	*head = NULL;
}

