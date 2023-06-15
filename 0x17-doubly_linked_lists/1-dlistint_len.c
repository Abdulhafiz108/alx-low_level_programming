#include "lists.h"

/**
 * dlistint_len - Gets the number of elements in a doubly linked list.
 * @h: A pointer to the linked list
 * Return: The number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
