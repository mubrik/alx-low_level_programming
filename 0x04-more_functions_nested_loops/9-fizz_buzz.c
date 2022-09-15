#include <stdio.h>

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
  * print_w_space - checks if 100, skips space if so
	* @c: char to print
	* @n: int to check
	* Return: 1 if true, 0 if false
	*/
void print_w_space(char *c, int n)
{
	printf("%s%s", c, n == 100 ? " " : " ");
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
			print_w_space("FizzBuzz", i);
		} else if (is_multiple_3(i))
		{
			print_w_space("Fizz", i);
		} else if (is_multiple_5(i))
		{
			print_w_space("Buzz", i);
		} else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (1);
}
