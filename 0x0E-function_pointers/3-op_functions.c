#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - function that adds two integers.
 * @a: integer parameter used addition.
 * @b: integer parameter used in addition.
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two integers.
 * @a: integer parameter used in substraction.
 * @b: integer parameter used in substraction.
 * Return: result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that subtracts two integers.
 * @a: integer parameter used in multiplication.
 * @b: integer parameter used in multiplication.
 * Return: result.
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides two integers.
 * @a: integer parameter used in division.
 * @b: integer parameter used in division.
 * Return: result.
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - function that gets the remainder of two integers.
 * @a: integer parameter used in modulo.
 * @b: integer parameter used in modulo.
 * Return: result.
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
