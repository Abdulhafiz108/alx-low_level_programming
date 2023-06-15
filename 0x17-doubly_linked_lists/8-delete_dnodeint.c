#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at and index of a doubly list
 * @head: The head node of a doubly list.
 * @index: The position of node to delete.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int len = 0;
	dlistint_t *tmp;

	tmp = *head;
	if (*head == NULL)
		return (-1);

	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (index > len - 1)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		tmp = tmp->next;
		tmp->prev = NULL;
		free(*head);
		*head = tmp;
	}
	len = 0;
	while (len != index)
	{
		tmp = tmp->next;
		len++;
	}
}
