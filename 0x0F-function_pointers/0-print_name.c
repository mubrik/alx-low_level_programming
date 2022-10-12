#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name : to print
 * @func_ptr: ptr to funtion
 * Return: Always void.
 */
void print_name(char *name, void (*func_ptr)(char *))
{
	void (*use_func)(char *);

	use_func = *func_ptr;
	use_func(name);
}
