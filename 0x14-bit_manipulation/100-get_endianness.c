#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: the 1 if little 0 if not
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char *) &x;

	return (*y + 48);
}
