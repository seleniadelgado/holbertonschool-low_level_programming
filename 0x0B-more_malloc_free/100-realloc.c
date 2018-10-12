#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_realloc - function that reallocates a memory block using malloc and free.
 * @old_size: parameter being copied.
 * @new_size: parameter being copied into.
 * @ptr: pointer for old size.
 * Return: pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = (malloc(new_size));
	if (ptr2 == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (x = 0; x < old_size && x < new_size; x++)
			ptr2[x] = ((char *)ptr)[x];
		free(ptr);
	}
	return (ptr2);
}
