#include "search_algos.h"
/**
 * linear_search - function searches for value in an array of ints using
 * linear search algorithms.
 * @array: pointer to the first element of the array to seach in.
 * @size: number of elements in the array.
 * @value: value to search for in an array
 */
int linear_search(int *array, size_t size, int value)
{
	int p = 0;

	if (array == NULL)
		return (-1);
	for (array[p]; array[p] < size, array++)
		if (array == value)
			return (array[p]);
		else


}
