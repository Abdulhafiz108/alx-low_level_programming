#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Head node of list to free.
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
