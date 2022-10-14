#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that searches for an integer.
 * @argc: arg counts
 * @argv: arguments ponter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/* declre ptr to main */
	int (*main_ptr)(int argc, char *argv[]), num, index;
	/* check argc */
	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	/* num bytes */
	num = atoi(argv[argc - 1]);
	/* neg num */
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	/* assign ptr of main */
	main_ptr = main;
	/* print bytes */
	for (index = 0; index <= num; index++)
	{
		/* && hex with 0xff to be able to truncate usin %02, casting to int */
		printf("%02x%s", *((int *)main_ptr + index)
			& (0xff), (index == num) ? "" : " ");
	}
	/* new line */
	printf("\n");
	return (0);
}
