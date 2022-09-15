#include "main.h"

/**
  * print_number - print int
	* @n: int to print
	* Return: void
	*/
void print_number(int n)
{
	if (n < 0)
	{
		/* print dash*/
		_putchar('-');
		/* make integer absolute */
		n *= -1;
	}
	if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
	}
	/* always print last char, valid for single int */
	_putchar((n % 10) + '0');
}
