#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *buf);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif /* MAIN_H */
