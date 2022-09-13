#include "main.h"

/**
 * print_last_digit - prints the last difgit of a number
 * @n: the int
 * Return: int the last digit
 */
int print_last_digit(int n)
{
	int last_digit;
	/* get diff divided 10 */
	if (n < 0)
		n = n * -1;
	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
