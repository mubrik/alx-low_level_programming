#include "main.h"

/**
  * print_triangle - draws a diagonal line on the terminal.
	* @size: amt of lines
	* Return: void
	*/
void print_triangle(int size)
{
	int vertical_loop;
	int horizontal_loop;
	int loop_length;
	int itr_to_print;

	vertical_loop = 0;
	loop_length = size - 1;
	while (size > 0 && vertical_loop <= loop_length)
	{
		horizontal_loop = 0;
		while (horizontal_loop <= loop_length)
		{
			itr_to_print = loop_length - vertical_loop;
			if (horizontal_loop >= itr_to_print)
			{
				_putchar(35);
			}
			else
			{
				_putchar(' ');
			}
			horizontal_loop++;
		}
		_putchar('\n');
		vertical_loop++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
