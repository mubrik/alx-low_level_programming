#ifndef FUNC_PTR_H
#define FUNC_PTR_H
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*func_ptr)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
/**
 * struct op - Struct op
 *
 * @op_name: The operator
 * @func_ptr: The function associated
 */
typedef struct op
{
	char *op_name;
	int (*func_ptr)(int a, int b);
} op_t;

#endif /* FUNC_PTR_H */
