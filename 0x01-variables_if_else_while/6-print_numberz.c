#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print to output using putchar
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		/* putchar literally puts a single character to the stdout */
		putchar(i + '0');
	}
	/* print new line */
	putchar('\n');
	return (0);
}
