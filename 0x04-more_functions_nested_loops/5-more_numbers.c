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
	int line_count;
	int num_count;

	line_count = 0;
	while (line_count <= 9)
	{
		num_count = 0;
		while (num_count <= 14)
		{
			print_3_num(num_count);
			num_count++;
		}
		_putchar('\n');
		line_count++;
	}
}
