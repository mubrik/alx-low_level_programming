#include <stdio.h>

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print out base 16 umbers using numbers
 */
int main(void)
{
	/* an array of int to add to make up ascii values */
	int num_arr[16] = {0, 1, 2, 3,
		4, 5, 6, 7, 8, 9, 49, 50, 51, 52, 53, 54};
	int i;

	for (i = 0 ; i < 16; i++)
	{
		/*
		 * '0' == 48 in ascii,
		 * adding 48 to numbers in array to convert them to ascii
		 */
		putchar(num_arr[i] + '0');
	}
	/* print new line */
	putchar('\n');
	return (0);
}
