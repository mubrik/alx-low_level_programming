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
	if (name == NULL || func_ptr == NULL)
		exit(EXIT_SUCCESS);
	func_ptr(name);
}
