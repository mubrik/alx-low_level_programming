#include <stdio.h>
#include <string.h>

/**
 * main - Main function entry point
 * Return: Always 0
 */
int main(void)
{
	int num_arr[10] = {0, 1, 2, 3,
		4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0 ; i < 10; i++)
	{
		putchar(num_arr[i] + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	/* print new line */
	putchar('\n');
	return (0);
}
