#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
int (*get_op_func(char *s))(int, int);

/**
 * main - prints result.
 * @argc: parameter used for arguments.
 * @argv: parameter used for pointers to strings.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (((argv[2][0] == '/') || (argv[2][0] == '%')) &&
	    (num2 == 0) && (argv[2][1]) == '\0')
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
