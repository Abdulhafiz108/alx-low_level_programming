#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a doubly linked list.
 * @head: The head node of the list.
 * @index: The position of the node.
 * Return: The node on success and NULL otherwise.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (index > len - 1)
		return (NULL);
	len = 0;
	tmp = head;
	while (len != index)
	{
		tmp = tmp->next;
		len++;
	}
	return (tmp);
}
