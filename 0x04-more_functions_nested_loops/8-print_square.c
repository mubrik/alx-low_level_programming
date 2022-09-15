#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal.
	* @n: amt of lines
	* Return: void
	*/
void print_diagonal(int n)
{
	int vertical_loop;
	int horizontal_loop;

	vertical_loop = 1;
	while (n > 0 && vertical_loop <= n)
	{
		horizontal_loop = 1;
		while (horizontal_loop <= vertical_loop)
		{
			if (horizontal_loop != vertical_loop)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(92);
			}
			horizontal_loop++;
		}
		_putchar('\n');
		vertical_loop++;
	}
}
