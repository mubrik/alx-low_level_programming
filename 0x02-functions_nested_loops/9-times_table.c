#include "main.h"

/**
 * times_table - prints the 9 times table satrting with 0
 * Return: void
 */
void times_table(void)
{
	int first_loop;
	int second_loop;
	/* dont need to declare this can be one line but i like xplicit */
	int value_to_print;

	for (first_loop = 0; first_loop <= 9; first_loop++)
	{
		for (second_loop = 0; second_loop <= 9; second_loop++)
		{
			/* avlue is the multiplication f first and second loop */
			value_to_print = first_loop * second_loop;
			/* have to handle value > 10 seperately */
			if (value_to_print < 10)
			{
				/* dont print space for first iteration */
				if (second_loop != 0)
				{
					/* double space for single char */
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(value_to_print + '0');
			}
			else
			{
				/* single space for double char */
				_putchar(' ');
				/* get first and last char */
				_putchar((value_to_print / 10) + '0');
				_putchar((value_to_print % 10) + '0');
			}
			/* final comma skip */
			if (second_loop == 9)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}
