#include <stdio.h>
#include <string.h>

/**
 * main - Main function entry point
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		putchar(i + '0');
	}
	/* print new line */
	putchar('\n');
	return (0);
}
