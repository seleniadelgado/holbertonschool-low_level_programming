#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int num;

	va_start(arguments, n);
	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(arguments, int));
		if ((separator != NULL) && (num < n - 1))
			printf("%s", separator);
	}
	printf("\n");
va_end(arguments);
}
