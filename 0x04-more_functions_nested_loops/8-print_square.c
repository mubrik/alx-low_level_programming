#include "main.h"

/**
  * print_diagonal - prints a square, followed by a new line.
	* @size: size of square
	* Return: void
	*/
void print_square(int size)
{
	int vertical_loop;
	int horizontal_loop;

	vertical_loop = 1;
	while (size > 0 && vertical_loop <= size)
	{
		horizontal_loop = 1;
		while (horizontal_loop <= size)
		{
			_putchar(35);
			horizontal_loop++;
		}
		_putchar('\n');
		vertical_loop++;
	}
	if (size <= 0)
		_putchar('\n');
}
