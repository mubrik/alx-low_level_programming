#include "main.h"

/**
  * print_line - draws a straight line in the terminal.
	* @n: amt of lines
	* Return: void
	*/
void print_line(int n)
{
	int i;

	i = 1;
	while (n > 0 && i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
