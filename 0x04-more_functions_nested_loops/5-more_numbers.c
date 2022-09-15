#include "main.h"

/**
  * print_3_num - prints up to 3 int using _putchar
	* @n : int to print
	* Return: void
	*/
void print_3_num(int n)
{
	if (n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
}

/**
  * more_numbers - prints 10*(0-14) and newline
	* Return: void
	*/
void more_numbers(void)
{
	int i;

	i = 0;
	while (i <= 14)
	{
		print_3_num(i);
		i++;
	}
	_putchar('\n');
}
