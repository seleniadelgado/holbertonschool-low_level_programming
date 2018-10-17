#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @size: the number of elements in the array.
 * @cmp: is a pointer to the function to be used to compare values.
 * @array: the array we are comparing.
 * Return: int_index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((size <= 0) || (array == NULL) || (cmp == NULL))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
		return (-1);
}
