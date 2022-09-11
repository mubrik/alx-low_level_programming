#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: putchar unique combinations of 0-9 0-9 0-9
 */
int main(void)
{
	/* declare variables */
	int int_a;
	int int_b;
	int int_c;

	/* loop for the first integer */
	for (int_a = 0 ; int_a < 8; int_a++)
	{
		/* add one to int a */
		int_b = int_a + 1;
		/* loop for second iinteger */
		for (; int_b < 9; int_b++)
		{
			/* add 1 to int_b */
			int_c = int_b + 1;
			for (; int_c < 10; int_c++)
			{
				putchar(int_a + '0');
				putchar(int_b + '0');
				putchar(int_c + '0');
				/* skip last comma */
				if (int_a == 7 && int_b == 8 && int_c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	/* end new line */
	putchar('\n');
	return (0);
}
