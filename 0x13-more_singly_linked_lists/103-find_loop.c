#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list
 *
 * Return: The address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head, *end = head;

	while (start != NULL && end != NULL)
	{
		start = start->next;
		end = end->next->next;

		if (start == end)
		{
			start = head;
			while (start != end)
			{
				start = start->next;
				end = end->next;
			}
			return (start);
		}
	}

	return (NULL);
}
