#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index...
 * @n: unsigned number
 * @index: index unsigned number
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long bitmask;
	/* check */
	if (index > 63)
		return (-1);
	/* push bit by index */
	bitmask = 1 << index;
	/* and to get value */
	if (bitmask & n)
		return (1);
	return (0);
}
