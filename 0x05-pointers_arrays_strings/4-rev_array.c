#include "holberton.h"

/**
 * reverse_array a function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{

	int y;
	int x;
	int temp;

	x = 0;
	y = n - 1;
    	while (x < y)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}

}
