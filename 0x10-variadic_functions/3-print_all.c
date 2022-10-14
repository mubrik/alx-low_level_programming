#include <stdio.h>
#include "variadic_functions.h"

/**
 * pr_chars - prints characters, followed by a new line.
 * @argv: va_arg list
 * Return: void
 */
void pr_chars(va_list argv)
{
	char *str_to_print;
	/* get the arg */
	str_to_print = va_arg(argv, char *);
	/* if null */
	(str_to_print == NULL) && (str_to_print = "(nil)");
	/* print arg */
	printf("%s", str_to_print);
}

/**
 * pr_int - prints numbers, followed by a new line.
 * @argv: va_arg list
 * Return: void
 */
void pr_int(va_list argv)
{
	/* print arg */
	printf("%d", va_arg(argv, int));
}

/**
 * pr_char - prints single char, followed by a new line.
 * @argv: va_arg list
 * Return: void
 */
void pr_char(va_list argv)
{
	/* print arg */
	printf("%c", va_arg(argv, int));
}

/**
 * pr_float - prints numbers, followed by a new line.
 * @argv: va_arg list
 * Return: void
 */
void pr_float(va_list argv)
{
	/* print arg */
	printf("%f", va_arg(argv, double));
}

/**
 * print_all - function that prints anything.
 * @format: format of items to expect
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int index;
	char *fmt_ptr;
	void (*func_ptr)(va_list argv);
	va_list argv;
	/* struct to hold arg to func */
	arg_to_func_t arg_type[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_chars},
	};
	/* start or init variadic arg list */
	va_start(argv, format);
	/* copy const frmat */
	fmt_ptr = (char *) format;
	/* iterate using format */
	while (*fmt_ptr != '\0')
	{
		index = 0;
		/* find the current format in our list */
		while (index < 4)
		{
			if (*(arg_type[index].arg_repr) == *fmt_ptr)
			{
				/* get function used to print if match */
				func_ptr = arg_type[index].pr_func_ptr;
				/* call function to print and pass list */
				func_ptr(argv);
				/* print comma space if not at last char */
				if (fmt_ptr[1] != '\0')
					printf(", ");
				/* break loop */
				break;
			}
			index++;
		}
		fmt_ptr++;
	}
	/* new line */
	printf("\n");
}
