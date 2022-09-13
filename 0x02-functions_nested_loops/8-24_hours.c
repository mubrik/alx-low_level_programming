#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: void
 * Description: 24 hrs
 */
void jack_bauer(void)
{
	/* loop within a loop */
	int first_loop;
	int second_loop;
	/* dont need to declare this can be one line but i like xplicit */
	int hour_first;
	int hour_second;
	int minute_first;
	int minute_second;

	for (first_loop = 0; first_loop <= 23; first_loop++)
	{
		for (second_loop = 0; second_loop <= 59; second_loop++)
		{
			/* get first values by dividing by 10 */
			hour_first = first_loop / 10;
			/* get second values by using mod/% */
			hour_second = first_loop % 10;
			minute_first = second_loop / 10;
			minute_second = second_loop % 10;

			_putchar(hour_first + '0');
			_putchar(hour_second + '0');
			/* 58 is column in ascii */
			_putchar(58);
			_putchar(minute_first + '0');
			_putchar(minute_second + '0');
			_putchar('\n');
		}
	}
}
