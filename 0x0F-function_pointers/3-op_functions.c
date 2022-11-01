#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function that adds two integer.
 * @a: int a
 * @b: int b
 * Return: result of add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two integer.
 * @a: int a
 * @b: int b
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply two integer.
 * @a: int a
 * @b: int b
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integer.
 * @a: int a
 * @b: int b
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that mod two integer.
 * @a: int a
 * @b: int b
 * Return: result of modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
