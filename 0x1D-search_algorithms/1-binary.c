#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a ascending order
 * sorted integer array using Binary search algorithm.
 * @array: pointer to the first element in an array.
 * @value: the value to search for.
 * @size: size of the array.
 * Return: -1 if NULL or array position.
 */
int binary_search(int *array, size_t size, int value)
{
	int begin = 0;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	return (help_search(array, begin, end, value));
}
/**
 * help_search - recursively breaks down array to find the value at index.
 * @array: size of the array.
 * @begin: beginning of array.
 * @end: end of the array.
 * @value: value passed in to look for.
 * Return: index of where value is found.
 */
int help_search(int *array, size_t begin, size_t end, int value)
{
	int mid = ((begin + end) / 2);
	size_t i;

	printf("Searching in array: ");
	for (i = begin; i <= end; i++)
	{
		if (i < end)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	if (begin == end && array[begin] != value)
		return (-1);
	else if (begin == end && array[begin] == value)
		return (begin);
	if (array[mid] > value)
		return (help_search(array, begin, mid - 1, value));
	else if (array[mid] < value)
		return (help_search(array, mid + 1, end, value));
	return (mid);
}
