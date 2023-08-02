#include <stdlib.h>
#include <stdio.h>
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
	const listint_t *loop_start = NULL;

	while (current != NULL)
	{
		if (current == loop_start)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			count++;
			break;
		}

		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			if (!loop_start || (current->next > current))
				loop_start = current->next;
			else if (current->next == loop_start)
				break;
		}

		current = current->next;
	}

	return (count);
}

