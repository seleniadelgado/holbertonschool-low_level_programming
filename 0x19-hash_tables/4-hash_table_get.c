#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: the value associated with the element, or NULL if key could not be
 * found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_number;
	hash_node_t *index;

	if (key == NULL)
		return (NULL);
	if (ht == NULL)
		return (NULL);
	if (strcmp(key, "") == 0)
		return (NULL);
	hash_number = key_index((const unsigned char *)key, ht->size);
	index = ht->array[hash_number];
	while (index)
	{
		if (strcmp(key, index->key) == 0)
			return (index->value);
		index = index->next;
	}
	return (NULL);
}
