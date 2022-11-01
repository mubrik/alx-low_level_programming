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
	if (n <= 9)
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
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}

/**
 * print_3_spaces - print up to 3 spaces using _putchar
 * @n: 1 -3
 * Return: void
 */
void print_3_spaces(int n)
{
	if (n == 1)
		_putchar(' ');
	else if (n == 2)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
}

/**
 * print_times_table - prints the times table satrting with 0 end at n
 * @n: integer to end at
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	{
		int first_loop;
		int second_loop;
		/* dont need to declare this can be one line but i like xplicit */
		int value_to_print;

		for (first_loop = 0; first_loop <= n; first_loop++)
		{
			for (second_loop = 0; second_loop <= n; second_loop++)
			{
				value_to_print = first_loop * second_loop;
				if (value_to_print < 10)
				{
					/* dont print space for first iteration */
					if (second_loop != 0)
					{
						print_3_spaces(3);
					}
					print_3_num(value_to_print);
				}
				else if (value_to_print <= 99)
				{
					print_3_spaces(2);
					print_3_num(value_to_print);
				}
				else
				{
					print_3_spaces(1);
					print_3_num(value_to_print);
				}
				/* final comma skip */
				if (second_loop == n)
					continue;
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
