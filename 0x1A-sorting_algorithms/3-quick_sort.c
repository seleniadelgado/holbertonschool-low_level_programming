#include "sort.h"

void rec_quicksort(int *array, int start, int end, size_t size);

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
	int temp;

	for (; start < pivot; start++)
	{
		if (array[start] <= array[pivot])
		{
			behind++;
			if (behind != start)
			{
				temp = array[behind];
				array[behind] = array[start];
				array[start] = temp;
				print_array(array, size);
			}
		}
	}
	if (behind + 1 != pivot)
	{
		temp = array[behind + 1];
		array[behind + 1] = array[pivot];
		array[pivot] = temp;
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
	int s;

	if (start < end)
	{
		s = _partition(array, start, end, size);
		rec_quicksort(array, start, (s - 1), size);
		rec_quicksort(array, (s + 1), end, size);
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
