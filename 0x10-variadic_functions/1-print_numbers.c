#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: seperator of number
 * @n: num of int args
 *
 * Return: sum .
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int index, pr_sep;
	va_list argv;

	/* get argv */
	va_start(argv, n);
	/* loop, casted unsigned to int */
	for (index = 0; index < (int) n; index++)
	{
		/* if to print seperator or not */
		pr_sep = (separator == NULL) || (index == (int) n - 1);
		/* each successive call to the init listgets new arg */
		/* print arg */
		printf("%d%s", va_arg(argv, int), pr_sep ? "" : separator);
	}

	/* end */
	va_end(argv);
	/* new line */
	printf("\n");
	exit(EXIT_SUCCESS);
}
