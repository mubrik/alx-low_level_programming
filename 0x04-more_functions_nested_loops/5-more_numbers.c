#include "main.h"

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
			/* if > 10 print first char */
			if (num_count >= 10)
			{
				_putchar((num_count / 10) + '0');
			}
			_putchar((num_count % 10) + '0');
			num_count++;
		}
		_putchar('\n');
		line_count++;
	}
}
