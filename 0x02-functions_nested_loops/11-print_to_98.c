#include <math.h>
#include "main.h"

/**
 * print_3_num - print up to 3 numbers using _putchar
 * @n: num to print
 * Return: void
 * Description: i hate that i am doing if checks like this
 * not recursions or loops but limited toolset and brain
 */
void print_3_num(int n)
{
	if (n < 0)
	{
		/* print dash first, then remove negative */
		_putchar('-');
		if (n > -10)
			_putchar((n * -1) + '0');
		else if (n >= -100)
		{
			n = n * -1;
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			n = n * -1;
			/* print first, second and last char */
			_putchar((n / 100) + '0');
			_putchar(((n % 100) / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	else if (n <= 9)
		_putchar(n + '0');
	else if (n >= 100)
	{
		/* print first, second and last char */
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		/* get first and last char */
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}

/**
 * print_to_98 - print from n to 98
 * @n: int to start
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_3_num(i);
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_3_num(i);
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
