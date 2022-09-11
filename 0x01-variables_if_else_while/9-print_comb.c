#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print out numbers 0-9 with comma and spacing
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		/* print out each char */
		putchar(i + '0');
		/* skip comma and space for last digit */
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	/* print new line */
	putchar('\n');
	return (0);
}
