#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: ptr to unsigned number
 * @index: index unsigned number
 * Return: the bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long bitmask;
	/* check */
	if (index > 63)
		return (-1);
	/* push bit by index, then negate to make 1111110111... */
	bitmask = ~(1UL << index);
	/* simple and should do the trick */
	*n &= bitmask;
	return (1);
}
