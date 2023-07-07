#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table.
 * @size: Is the size of the array.
 * Return: A pointer to the created hashtable or NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	new->size = size;
	if (!new)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
