#include "main.h"

/**
  * print_numbera - print int
	* @n: int to print
	* Return: void
	*/
void print_numbera(int n)
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

/**
  * print_number - print int
	* @n: int to print
	* Return: void
	*/
void print_number(int n)
{
	unsigned int digit = 1000000000; /* make this very big */
	unsigned int n10;

	/*make number absolute*/
	if (n < 0)
	{
		/* print dash*/
		_putchar('-');
		/* make integer absolute */
		n *= -1;
	}

	/* multi by 10 */
	n10 = 10 * n;

	if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		while (digit > n10)
			digit /= 10;
		while (digit /= 10)
			_putchar(((n / digit) % 10) + '0');
	}
}

