#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - functio that performs the operation.
 * @s: parameter used to iterate through the array.
 * Return: function pointer.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	if ((s == NULL) || (s[1] != '\0'))
		return (NULL);
	while ((i < 5) && (*s != ops[i].op[0]))
		i++;
	return (ops[i].f);
}
