#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last difgit of a number
 * @n: the int
 * Return: int the last digit
 */
int print_last_digit(int n)
{
	int last_digit;
	/* get diff divided 10 */
	last_digit = abs(n) % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
