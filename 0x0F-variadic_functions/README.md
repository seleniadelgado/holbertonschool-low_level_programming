Project 0x0F. C - Variadic Functions.
What are variadic functions?
Variadic functions are functions that take a variable number or type of
arguments.

How to use va_start, va_arg and va_end?
va_start: It's called with two arguments. the first is the varibale declared of
the type va-list and the 2nd is the name of the last named parameter.

va_arg:
Each invocation of va_arg macro yields the next argument.
The first argument of the va_arg is the va_list and the second is the type of
the next argument passed to the function.
va_end: It's called on the va list before the function returns.

Why and how to use the const type qualifier?
Use it when you want an integer to be constant. Meaning it's value cannot be
changed. 