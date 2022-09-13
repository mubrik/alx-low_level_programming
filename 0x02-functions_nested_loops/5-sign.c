#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to print
 * Return: 1 and prints + if n > 0
 * returns 0 and prints 0 if n == 0
 * return -1 and prints - if n < 0
 */
int print_sign(int n)
{
	/* simple if check */
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		/* if above dont match its greater */
		_putchar(43);
		return (1);
	}

}
