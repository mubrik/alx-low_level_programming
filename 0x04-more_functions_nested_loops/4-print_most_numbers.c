#include "main.h"

/**
  * print_most_numbers - prints 0-9 !=2|4 and newline
	* Return: result of multiply
	*/
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
