#include <stdio.h>
#include <string.h>

/**
 * main - Main function entry point
 * Return: Always 0
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
			/* second a loop, notice we are tracking first a here!, why? because after first a passes a number, */
			/* we can be sure all possible match with that number is done, e.g if first a passes 40 like: 4* **, */
			/* ** 2* is unnecassary because it must have been matched earlier */
			for (int_second_a = int_first_a; int_second_a < 10; int_second_a++)
			{
				/* we determine the start value by comparing if first a matches second a, but up above we set second a to be equal first a, so why match?? */
				/* because that we we can track if it's on its first iteration, first iteration means we can add one to first b as the satrt value,*/
				/* because again it must have been matched earlier */
				for (int_second_b = int_second_a == int_first_a ? int_first_b + 1 : 0;
					 int_second_b < 10; int_second_b++)
				{
					putchar(int_first_a + '0');
					putchar(int_first_b + '0');
					putchar(' ');
					putchar(int_second_a + '0');
					putchar(int_second_b + '0');
					/* skip last number */
					if (int_first_a != 9 || int_first_b != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	/* end new line */
	putchar('\n');
	return (0);
}
