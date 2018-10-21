#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct name - structure used for project 3.
 * @name: parameter used for char.
 * @type: parameter used for function.
 */
typedef struct name
{
	char *name;
	void (*type)(va_list ap);
} print_t;
void print_char_function(va_list c);
void print_int_function(va_list i);
void print_float_function(va_list f);
void print_string_function(va_list r);
#endif
