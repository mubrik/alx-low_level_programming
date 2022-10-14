#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct arg_to_func - Struct arg_to_func
 *
 * @arg_repr: The character representation of arg
 * @arg_string: The string
 */
typedef struct arg_to_func
{
	char *arg_repr;
	void (*pr_func_ptr)(va_list argv);
} arg_to_func_t;

#endif /* VARIADIC_H */
