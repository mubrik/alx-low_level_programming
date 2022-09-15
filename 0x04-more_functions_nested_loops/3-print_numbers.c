#include "main.h"

/**
  * print_numbers - prints 0-9 and newline
	* Return: result of multiply
	*/
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
