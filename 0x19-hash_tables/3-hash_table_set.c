#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the table we want to update the key/value to.
 * @key: is they key. Key can not be an empty string.
 * @value: is the value associated with the key.
 * must be duplicated, value can be an empty string.
 * Return: 1 upon success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	unsigned long int hash_number;
	hash_node_t *index;

	if (key == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	hash_number = key_index((const unsigned char *)key, ht->size);
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	if (ht->array[hash_number] == NULL)
	{
		ht->array[hash_number] = new_element;
		new_element->next = NULL;
	}
	else
	{
		index = ht->array[hash_number];
		while (index)
		{
			if (strcmp(key, index->key) == 0)
			{
				index->value = strdup(value);
				free(new_element);
				return (1);
			}
			index = index->next;
		}
		index = ht->array[hash_number];
		new_element->next = index;
		ht->array[hash_number] = new_element;
	}
	return (1);
}
