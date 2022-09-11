#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: putchar unique combination of 0-90-9 0-90-9
 */
int main(void)
{
	/* declare variables */
	int int_first_a;
	int int_first_b;
	int int_second_a;
	int int_second_b;
	/* first a loop */
	for (int_first_a = 0; int_first_a < 10; int_first_a++)
	/* first b loop */
	{
		for (int_first_b = 0; int_first_b < 10; int_first_b++)
		{
			/*
			 * second a loop, notice we are tracking first a here!,
			 * why? because after first a passes a number,
			 * we can be sure all possible match with that number is done,
			 */
			for (int_second_a = int_first_a; int_second_a < 10; int_second_a++)
			{
				/* betty style linting, cant exceed 40 lines for function */
				for (int_second_b = int_second_a == int_first_a ? int_first_b + 1 : 0;
					 int_second_b < 10; int_second_b++)
				{
					putchar(int_first_a + '0');
					putchar(int_first_b + '0');
					putchar(' ');
					putchar(int_second_a + '0');
					putchar(int_second_b + '0');
					/* skip last number */
					if (int_first_a == 9 && int_first_b == 8)
						continue;
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	/* end new line */
	putchar('\n');
	return (0);
}
