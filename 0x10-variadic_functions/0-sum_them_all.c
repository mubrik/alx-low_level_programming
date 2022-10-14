#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: num of int args
 *
 * Return: sum .
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, index;
	va_list argv;

	sum = 0;
	/* base check */
	if (n == 0)
		return (0);
	/* get argv */
	va_start(argv, n);
	/* loop, casted unsigned to int */
	for (index = 0; index < (int) n; index++)
	{
		/* each successive call to the init listgets new arg */
		sum += va_arg(argv, int);
	}

	/* end */
	va_end(argv);

	return (sum);
}
