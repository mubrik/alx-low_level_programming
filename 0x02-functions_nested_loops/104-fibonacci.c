#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fib seq to 50
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int first_numb;
	unsigned long int second_numb;
	unsigned long int sequence_val;

	/* first 2 numbers to start */
	first_numb = 1;
	second_numb = 2;
	i = 3;

	/* start by adding both */
	sequence_val = first_numb + second_numb;

	while (i <= 98)
	{
		/* make first numb 2nd numb */
		first_numb = second_numb;
		/* make second numb the prev total */
		second_numb = sequence_val;
		/* now add the 2 numb again */
		sequence_val = first_numb + second_numb;
		printf("%lu, ", sequence_val);
		i++;
	}
	printf("\n");
	return (0);
}
