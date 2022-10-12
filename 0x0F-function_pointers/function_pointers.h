#ifndef FUNC_PTR_H
#define FUNC_PTR_H
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*func_ptr)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNC_PTR_H */
