#include "search_algos.h"
/**
 * linear_search - function searches for value in an array of ints using
 * linear search algorithms.
 * @array: pointer to the first element of the array to seach in.
 * @size: number of elements in the array.
 * @value: value to search for in an array
 * Return: -1 if null or array position
 */
int linear_search(int *array, size_t size, int value)
{
	int p;
	int a = size;

	if (array == NULL)
		return (-1);
	for (p = 0; p != a; p++)
	{
		printf("Value checked array [%d] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
	}
	return (-1);
}
