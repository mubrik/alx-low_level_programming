#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: seperator of number
 * @n: num of int args
 *
 * Return: void .
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int index, pr_sep;
	char *str_to_print;
	va_list argv;

	/* get argv */
	va_start(argv, n);
	/* loop, casted unsigned to int */
	for (index = 0; index < (int) n; index++)
	{
		/* if to print seperator or not */
		pr_sep = (separator == NULL) || (index == (int) n - 1);
		/* each successive call to the init listgets new arg */
		str_to_print = va_arg(argv, char *);
		/* if null */
		if (str_to_print == NULL)
			str_to_print = "(nil)";
		/* print arg */
		printf("%s%s", str_to_print, pr_sep ? "" : separator);
	}

	/* end */
	va_end(argv);
	/* new line */
	printf("\n");
	exit(EXIT_SUCCESS);
}
