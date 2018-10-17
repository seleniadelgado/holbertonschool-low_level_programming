Project 0x0E. C - Function pointers
This project aims to teach the following:

What are function pointers and how to use them?
Function pointers are pointers that point to a function. As opposed to
referencing a data value, a function pointer points to executable code within
memory.

What does a function pointer exactly hold?
Holds code and the first byte pf code of the function.

Where does a function pointer point to in the virtual memory?
virtual functions are typically called through a pointer stored in a table
which an object has a single pointer to)

0-print_name.c
print_name(char *name, void (*f) (char*)) is a function that prints a name.

1-array_iterator.c
array_iterator(int *array, size_t size, void (*action)(int)) is a function
that executes a function given as a parameter on each element of an array.
Where size is the size of the array and action is a pointer to the funtion you
need to use.

2-int_index.c
int int_index(int *array, int size, int (*cmp)(int)) is a function that
searches for an integer. Where size is the number of elements in the array.
cmp is a pointer to the function to be used to compare values.
int_index returns the index of the first element for which the cmp function
does not return 0. if not element matches, return -1. if size is <= 0, returns
1.

3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h is a function that
performs simple operations. 