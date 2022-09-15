#include <stdio.h>
#include "main.h"

/**
  * is_multiple_3 - checks if a multiple of 3
	* @n: int to check
	* Return: 1 if true, 0 if false
	*/
int is_multiple_3(int n)
{
	return (n % 3 == 0);
}

/**
  * is_multiple_5 - checks if a multiple of 5
	* @n: int to check
	* Return: 1 if true, 0 if false
	*/
int is_multiple_5(int n)
{
	return (n % 5 == 0);
}

/**
  * main - Fizz-Buzz test
	* Return: 1
	*/
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (is_multiple_3(i) && is_multiple_5(i))
		{
			printf("FizzBuzz ");
		} else if (is_multiple_3(i))
		{
			printf("Fizz ");
		} else if (is_multiple_5(i))
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (1);
}
