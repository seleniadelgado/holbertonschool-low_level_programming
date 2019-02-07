#include "sort.h"

void rec_quicksort(int *array, int start, int end, size_t size);
/**
 * _swap - function to swap two values around.
 * @a: first item to be swapped.
 * @b: second item to be swapped.
 */
void _swap(int* a, int* b)
{
        int temp;

        temp = a;
        *a = *b;
        *b = temp;
}

/**
 * _partition - partitions the array to a pivot point. Compares them and
 *  partitions.
 * @array:to be partitioned.
 * @start: begining of array
 * @end: end of the array, where the pivot point begins for partitioning.
 * @size: the size of the array.
 * Return: the place of the pivot.
 */
int _partition(int *array, int start, int end, size_t size)
{
	int pivot = end;
	int behind = (start - 1);

	for (; start < pivot; start++)
	{
		if (array[start] <= array[pivot])
		{
			behind++;
			if (behind != start)
			{
				_swap(array[behind], array[start]);
				print_array(array, size);
			}
		}
	}
	if (behind != pivot)
	{
		_swap(array[behind + 1], array[pivot]);
		print_array(array, size);
	}
	return (behind + 1);
}
/**
 * rec_quicksort - recursively calls itself to partition.
 * @array: to be partitioned.
 * @start: the beginning of the array.
 * @end: the end of the array.
 * @size: the size of the array.
 */
void rec_quicksort(int *array, int start, int end, size_t size)
{
	int shoji;

	if (start < end)
	{
		shoji = _partition(array, start, end, size);
		rec_quicksort(array, start, (shoji - 1), size);
		rec_quicksort(array, (shoji + 1), end, size);
	}
}
/**
 * quick_sort - function that sorts an array of integers in ascending order.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	rec_quicksort(array, 0, size - 1, size);
}
