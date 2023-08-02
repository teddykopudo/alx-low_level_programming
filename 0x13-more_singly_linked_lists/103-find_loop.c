#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Returns: the number of nodes in the list
 *
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 * Output format: see example
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	int loop_found = 0;

	while (current != NULL && !loop_found)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		if (current == head)
			loop_found = 1;
	}

	if (loop_found)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		count++;
	}

	return (count);
}
