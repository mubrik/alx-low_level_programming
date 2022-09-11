#include <stdio.h>
#include <string.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print numbers 0 to 9
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		/* %d represent integer  */
		printf("%d", i);
	}
	/* print new line */
	putchar('\n');
	return (0);
}
