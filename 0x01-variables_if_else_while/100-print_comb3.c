#include <stdio.h>
#include <string.h>

/**
 * main - Main function entry point
 * Return: Always 0
 */
int main(void)
{
	/* declare variables */
	int int_a;
	int int_b;
	/* int i; */

	/* loop for the first integer */
	for (int_a = 0 ; int_a < 9; int_a++)
	{
		/* putchar(int_a + '0'); */
		/* add one to previous int */
		int_b = int_a + 1;
		/* loop for second iinteger */
		for (; int_b < 10; int_b++)
		{
			putchar(int_a + '0');
			putchar(int_b + '0');
			if (int_a != 8 || int_b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
