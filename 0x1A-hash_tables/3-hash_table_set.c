#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hashtable.
 * @ht: The hashtable to add to or update.
 * @key: The key of element you want to add.
 * @value: The value of the element to add.
 * Return: 1 on success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *start;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key =(char *)key;
	new->value = strdup(value);
	new->next = NULL;
	start = ht->array[index];
	if (start != NULL)
	{
		while (start)
		{
			if (strcmp(start->key, key) == 0)
			{
				free(start->value);
				start->value = strdup(value);
				if (start->value == NULL)
					return (0);
				free(new->value);
				free(new);
				return (1);
			}
			start = start->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
	ht->array[index] = new;
	return (1);
}
