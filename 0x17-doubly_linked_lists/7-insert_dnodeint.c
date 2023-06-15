#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a new node at a specific position of a list.
 * @h: a pointer to the doubly linked list.
 * @idx: The position to insert the list.
 * @n: The integer value.
 * Return: The address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0;
	unsigned int i = 0;
	dlistint_t *new, *tmp;

	tmp = *h;
	if (*h == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	if (idx > len)
		return (NULL);
	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	while (i != idx)
	{
		tmp = tmp->next;
		i++;
	}
	if (idx == 0)
	{
		new->next = tmp;
		tmp->prev = new;
		*h = new;
	}
	else if (idx == len)
	{
		tmp->next = new;
		new->prev = tmp;
	}	
	else
	{
		new->prev = tmp->prev;
		new->next = tmp;
		tmp->prev->next = new;
		tmp->prev = new;
	}
	return (new);
}
