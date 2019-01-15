#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: a pointer to the newly created hash table or Null if something
 * went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **node;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	node = malloc(size * (sizeof(hash_node_t *)));
	if (node == NULL)
		return (NULL);
	hash_table->array = node;
	return (hash_table);
}
