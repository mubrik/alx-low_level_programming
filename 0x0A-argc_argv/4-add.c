#include "main.h"
#include <stdio.h>

/**
	* is_number - checks if string is number
	* @str_pointer: str pointer
	* Return: 1 if true, 0 else
	*/
int is_number(char *src_ptr)
{
	/* ignore neg */
	if (*src_ptr == '-')
		src_ptr++;

	/* immediately return if not number */
	if (!(*src_ptr >= '0' && *src_ptr <= '9'))
	{
		return (0);
	}

	while (*src_ptr != '\0')
	{
		if (!(*src_ptr >= '0' && *src_ptr <= '9'))
		{
			/* immediately return 0 */
			return (0);
		}
		src_ptr++;
	}

	return (1);
}

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
	int index, total_number, exit_code;

	total_number = 0;
	exit_code = 0;

	/* base case */
	if (argc == 1)
	{
		printf("0\n");
		return (exit_code);
	}

	for (index = 1; index <= argc - 1; index++)
	{
		if (is_number(argv[index]))
		{
			total_number += _atoi(argv[index]);
		}
		else
		{
			exit_code = 1;
			printf("Error\n");
			break;
		}
	}
	if (exit_code == 0)
		printf("%d\n", total_number);
	return (exit_code);
}
