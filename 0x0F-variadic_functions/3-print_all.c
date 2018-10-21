#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char_function - prints char.
 * @c: parameter passed.
 *
 *
 */
void print_char_function(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int_function - prints integer.
 * @i: paramter passed.
 *
 *
 */
void print_int_function(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float_function - prints a float.
 * @f: parameter passed.
 *
 *
 */
void print_float_function(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string_function - prints a string.
 * @r: parameter passed.
 *
 *
 */
void print_string_function(va_list r)
{
	char *s;

	s = (va_arg(r, char *));
	if (s == NULL)
	s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * print_t - structure.
 */
void print_all(const char * const format, ...)
{
	print_t names[] = {
	{"c", print_char_function},
	{"i", print_int_function},
	{"f", print_float_function},
	{"s", print_string_function},
	{NULL, NULL}
	};
	char *separator;

	va_list ap;

	int i = 0;
	int j = 0;
	separator = "";

	va_start(ap, format);

	while ((format[i] != '\0') && (format != NULL))
	{
		while (j < 4)
		{
			if (format[i] == *(names[j].name))
			{
				printf("%s", separator);
				names[j].type(ap);
				separator = ", ";
			}
		j++;
		}
	i++;
	j = 0;
	}
	printf("\n");
	va_end(ap);
}
