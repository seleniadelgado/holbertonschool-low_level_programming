#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: Always 0.
 * struct_print - structure.
 */
void print_all(const char * const format, ...)
{
	struct_print [] = {
		{"c", print_char_function},
		{"i", print_int_function},
		{"f", print_float_function},
		{"s", print_string_function},
		{NULL, NULL}
};
	unsigned int i, j;
	va_list ap;

	va_start(ap, format);

	if (format == NULL)
		printf("(nil)");
	while ((format[i] != NULL) && (format[1] != '\0'))

	i++;
	return (print);
}
___________________________________________
/**
 * print_char_function - prints char.
 *
 *
 * @x: parameter type char passed in function.
 */
void print_char_function(char x, ...)
{
	printf("%c", va_arg(ap, char);
}
_____________________________________________
/**
 * print_int_function - prints integer.
 *
 *
 * @a: parameter type int passed in function.
 */
void print_int_function(int a, ...)
{
	printf("%d", va_arg(ap, int);
}
______________________________________________
/**
 * print_float_function - prints a float.
 *
 *
 * @b: parameter type float passed in function.
 */
void print_float_function(float b, ...)
{
	printf("%f", va_arg(ap, b);
}
_______________________________________________
/**
 * print_string_function - prints a string.
 *
 *
 * @s: character string used in function.
 */
void print_string_function(char *s, ...)
{
	char *s;

	s = (va_arg(ap, char *)
	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}
