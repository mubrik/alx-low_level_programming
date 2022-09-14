#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fib seq to 50
 * Return: 0
 */
int main(void)
{
	unsigned long int first_numb;
	unsigned long int second_numb;
	unsigned long int sequence_val;
	unsigned long int total;

	/* first 2 numbers to start */
	first_numb = 1;
	second_numb = 2;
	total = 0;

	/* start by adding both */
	sequence_val = first_numb + second_numb;

	while (first_numb <= 4000000 || second_numb <= 4000000)
	{
		if (sequence_val % 2 == 0)
		{
			total += sequence_val;
		}
		/* make first numb 2nd numb */
		first_numb = second_numb;
		/* make second numb the prev total */
		second_numb = sequence_val;
		/* now add the 2 numb again */
		sequence_val = first_numb + second_numb;
	}
	printf("%lu", total);
	printf("\n");
	return (0);
}
