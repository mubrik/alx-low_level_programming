#include <stdio.h>

/**
 * main - computes & prints the sum of all the multiples of 3/5 < 1024
 * Return: 1
 */
int main(void)
{
	int result = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 ==0)
			result += i;
	}
	printf("%d\n", result);
	return (1);
}
