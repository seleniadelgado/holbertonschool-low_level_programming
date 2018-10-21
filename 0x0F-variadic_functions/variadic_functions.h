#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print - structure used for project 3.
 * @name: parameter used for char.
 * @type: parameter used for function.
 */


typedef struct print
{
	char *name;
	int (*type)(int a, int b);
} print_t;
#endif
