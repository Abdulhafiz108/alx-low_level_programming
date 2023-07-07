#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *new;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			new = ht->array[index];
			while (new != NULL)
			{
				ht->array[index] = ht->array[index]->next;
				free(new->key);
				free(new->value);
				free(new);
				new = ht->array[index];
			}
		}
		free(ht->array);
		free(ht);
	}
}
