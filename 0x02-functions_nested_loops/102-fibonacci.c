#include <stdio.h>

/**
 * fib - fibonacci recursive
 * @n: fibonnaci seq
 * Return: void
 */
int fib(int n)
{
	int result;

	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		result = fib(n - 1) + fib(n - 2);
		return(result);
	}
}

/**
 * main - prints fib seq to 50
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 50)
	{
		int result = fib(i);
		printf("%d, ", result);
		i++;
	}
	printf("\n");
	return (0);
}
