#include <stdio.h>
#include <string.h>

/**
 * main - Main function entry point
 * Return: Always 0
 */
int main(void)
{
	/* declare variables */
	int int_aa;
	int int_ab;
	int int_ba;
	int int_bb;

	for (int_aa = 0; int_aa < 10; int_aa++)
	{
		for (int_ab = 0; int_ab < 10; int_ab++)
		{
			for (int_ba = int_aa; int_ba < 10; int_ba++)
			{
				for (int_bb = int_aa == 0 ?
					0 : int_ab + 1;
					int_bb < 10; int_bb++)
				{

					putchar(int_aa + '0');
					putchar(int_ab + '0');
					putchar(' ');
					putchar(int_ba + '0');
					putchar(int_bb + '0');
					/* skip last number */
					if (int_aa != 9 || int_ab != 8)
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
