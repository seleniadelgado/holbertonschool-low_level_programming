#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key where we are to get the index from.
 * @size: size of the array of the hash table.
 * Return: returns the index at which the key/value pair should be stored
 * in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_number;
	unsigned long int counter;

	hash_number = hash_djb2(key);
	return (counter = hash_number % size);
}
