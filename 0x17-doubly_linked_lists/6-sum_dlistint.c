#include "lists.h"

/**
 * sum_dlistint - Gets the sum of all the data n of a doubly linked list
 * @head: The head node of the list
 * Return: The sum or 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
