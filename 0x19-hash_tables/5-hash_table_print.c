#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int hash_number = 0;
	hash_node_t *index;
	unsigned long int counter = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (hash_number != ht->size)
	{
		if (counter > 0 && ht->array[hash_number])
			printf(", ");
		index = ht->array[hash_number];
		while (index != NULL)
		{
			printf("'%s': '%s'", index->key, index->value);
			counter++;
			if (index->next != NULL)
				printf(", ");
			index = index->next;
		}
		hash_number++;
	}
	printf("}\n");
}
