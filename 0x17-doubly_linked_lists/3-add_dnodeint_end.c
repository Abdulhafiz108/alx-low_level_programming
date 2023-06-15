#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list.
 * @head: A pointer to the head node of the list.
 * @n: The integer value of the new node.
 * Return: The address of new element or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;
	return (new);
}
