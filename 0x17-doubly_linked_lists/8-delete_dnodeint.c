#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at and index of a doubly list
 * @head: The head node of a doubly list.
 * @index: The position of node to delete.
 * Return: 1 on success and -1 otherwise.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0;
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
	len = 0;
	while (len != index)
	{
		tmp = tmp->next;
		len++;
	}
	if ((index == 0))
	{
		if (tmp->next == NULL)
		{
			free(tmp);
			*head = NULL;
		}
		else
		{
			tmp = (*head)->next;
			tmp->prev = NULL;
			free(*head);
			*head = tmp;
		}
	}
	else if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
	}
	else
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
