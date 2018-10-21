#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

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
		printf("(nil)");
	printf("%s", s);
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: Always 0.
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
	va_list ap;
	int i, j;
	char *separator;

	va_start(ap, format);
	separator = "";
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (names[j].name != NULL)
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
	}
	printf("\n");
	va_end(ap);
}
