#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list.
 * @h: A pointer to the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
