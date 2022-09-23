#include "main.h"

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

