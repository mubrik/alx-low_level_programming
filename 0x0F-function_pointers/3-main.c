#include <stdio.h>
#include "3-calc.h"

/**
 * main - function that searches for an integer.
 * @argc: arg counts
 * @argv: arguments ponter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*func_ptr)(int, int);

	/* check args length, must be 4 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* eh, burning my last if on this */
	if (*argv[2] == '\\')
	{
		printf("Error\n");
		exit(99);
	}

	/* get func from 2 arg to code */
	func_ptr = get_op_func(argv[2]);

	/* check null */
	if (func_ptr ==  NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func_ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
