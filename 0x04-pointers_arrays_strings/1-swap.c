#include "holberton.h"
/**
 * swap_int - swap pointers.
 * @a: parameter used.
 * @b: parameter used.
 *
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
