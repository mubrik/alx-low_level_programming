#include "main.h"
#include <stdio.h>

/**
	* _atoi - convert string to num
	* @str_pointer: str pointer
	* Return: int
	*/
int _atoi(char *str_pointer)
{
	int number_value, is_neg;

	number_value = 0;
	is_neg = 0;
	/* neg num */
	if (*str_pointer == '-')
	{
		is_neg = 1;
		/* push foward once to get number part */
		str_pointer++;
	}

	/* iterate to get numbers */
	while ((*str_pointer >= '0') && (*str_pointer <= '9'))
	{
		number_value = number_value * 10 + (*str_pointer - '0');
		str_pointer++;
	}

	if (is_neg) /* if negative */
		number_value *= -1;

	return (number_value);
}

/**
	* main - program that multiplies two numbers
	* @argc: argument count
	* @argv: arguments point to array pointer
	* Return: 0 success
	*/
int main(int argc, char *argv[])
{
	int num1, num2;
	/* check name + 2 numb to multiply */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* convert to int */
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
