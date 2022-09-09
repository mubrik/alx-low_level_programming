#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main function entry point
 * Return: Always 0
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d %s\n",
		   n, last_digit, last_digit == 0 ? "and is 0" :
		   last_digit < 6 ? "and is less than 6 and not 0" : "and is greater than 5");
	return (0);
}
