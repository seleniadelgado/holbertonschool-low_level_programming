#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble
 * sort algorithm.
 * @array: array being sorted.
 * @size: Number of elements in an array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	int t = 0;
	size_t len = size - 1;
	int n = 5;

	if (array == NULL)
		return;
	while (j < len)
	{
		if (array[j] > array[j + 1])
		{
			t = array[j];
			array[j] = array[j + 1];
			array[j + 1] = t;
			print_array(array, size);
			n = 4;
		}
	j++;
		if (j == len)
		{
			if (n == 5)
				return;
			j = 0;
			len--;
			n = 5;
		}
	}
}
