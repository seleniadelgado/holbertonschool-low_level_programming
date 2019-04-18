#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int help_search(int *array, size_t begin, size_t end, int value);
#endif
