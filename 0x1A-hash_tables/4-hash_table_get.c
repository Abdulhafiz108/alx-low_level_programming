#include "hash_tables.h"

/**
 * *hash_table_get - Retrieves the value associated with a key.
 * @ht: The hash table to search in.
 * @key: The key's value to retrieve.
 * Return: Returns value on success and NULL otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];
	if (new == NULL)
		return (NULL);
	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
			return (new->value);
		new = new->next;
	}
	return (NULL);
}
