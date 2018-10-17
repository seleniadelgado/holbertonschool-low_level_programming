#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - is a function that executes a function given as a
 * parameter on each element of an array.
 * @size: the size of the array.
 * @array: the array in which each element is executed.
 * @action: is a pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((size == 0) || (action == NULL) || (array == NULL))
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
