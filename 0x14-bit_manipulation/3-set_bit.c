#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: ptr to unsigned number
 * @index: index unsigned number
 * Return: the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long bitmask;
	/* check */
	if (index > 63)
		return (-1);
	/* push bit by index */
	bitmask = 1UL << index;
	/* simple or should do the trick */
	*n |= bitmask;
	return (1);
}
