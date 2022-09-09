#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Main function entry point
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d %s\n", n,
		   n == 0 ? "is zero" : n < 0 ? "is negative" : "is positive");
	return (0);
}
