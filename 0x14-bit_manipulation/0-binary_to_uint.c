#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @buf: binary buffer
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *buf)
{
	char *str_buf;
	unsigned int bin_count = 0, total = 0;
	/* check */
	if (!buf)
		return (0);
	str_buf = (char *) buf; /* cp poiter */
	/* push to end */
	while (*str_buf)
		str_buf++;
	/* push aay from null byte */
	str_buf--;
	/* push back */
	while (*str_buf)
	{
		if (*str_buf == '1')
			total += 1 << bin_count; /* same as 2^bin_count */
		else if (*str_buf != '0')
			return (0);
		str_buf--, bin_count++; /* increment */
	}

	return (total);
}
