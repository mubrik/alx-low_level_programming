#include <stdio.h>
#include "main.h"


/**
 * count_active_bit - counts amount of active (1) bits
 * @n: unsigned number
 * Return: int
 */
unsigned int count_active_bit(unsigned long int n)
{
	unsigned int total = 0, bit_count = 0;
	unsigned long int bitmask;

	if (n == 0)
		return (0);
	/* 100000...  */
	bitmask = 1UL << 63;
	/* loop through bits and perform & to keep only 1/true bit */
	for (; bit_count < 64; bit_count++)
	{
		if (n & bitmask)
			total += 1;
		n <<= 1; /* shift value by 1 to keep push */
	}

	return (total);
}

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @num_a: orig number
 * @num_b: number to be flipped to
 * Return: amount of bits to flip
 */
unsigned int flip_bits(unsigned long int num_a, unsigned long int num_b)
{
	/* xor to get the different bits as active bits, then count them */
	return (count_active_bit(num_a ^ num_b));
}
