#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints a string.
 * @n: number of strings passed to the function.
 * @separator: string to use to separate the char strings.
 *
 * Return: 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int num;
	char *p;

	va_start(arguments, n);
	for (num = 0; num < n; num++)
	{
		p = va_arg(arguments, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if ((separator != NULL) && (num < n - 1))
			printf("%s", separator);
	}
	printf("\n");
va_end(arguments);
}
