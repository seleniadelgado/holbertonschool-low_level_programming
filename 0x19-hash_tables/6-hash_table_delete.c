#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table.
 * @ht: is the hashtable.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int hash_number = 0;
	hash_node_t *object;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (hash_number = 0; hash_number < ht->size; hash_number++)
	{
		object = ht->array[hash_number];
		while (object != NULL)
		{
			free(object->value);
			free(object->key);
			temp = object->next;
			free(object);
		}
		temp = object;
		free(temp);
	}
	free(ht->array);
	free(ht);
}
