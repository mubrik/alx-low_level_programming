#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number..
 * @n: unsigned number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int bitmask, print_flag = 0, bit_count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* 100000...  */
	bitmask = 1 << 31;
	/* loop through bits and perform & to keep only 1/true bit */
	for (; bit_count < 32; bit_count++)
	{
		print_flag = print_flag ? print_flag : (n & bitmask);
		if (print_flag)
			_putchar(n & bitmask ? '1' : '0');
		n <<= 1; /* shift value by 1 to keep push */
	}
}
