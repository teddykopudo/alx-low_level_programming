#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * and returns the head node's data (n).
 * @head: Pointer to the head of the list.
 *
 * Return: Head node's data (n) or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *temp_head;

	if (*head == NULL)
		return (0);

	temp_head = *head;
	head_data = temp_head->n;
	*head = temp_head->next;
	free(temp_head);

	return (head_data);
}
