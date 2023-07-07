#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: The hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *new;

	printf("{");
	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			new = ht->array[index];
			while (new != NULL)
			{
				printf("'%s': '%s'", new->key, new->value);
				if (new->next != NULL)
					printf(", ");
				new = new->next;
			}
		}
	}
	printf("}\n");
}
