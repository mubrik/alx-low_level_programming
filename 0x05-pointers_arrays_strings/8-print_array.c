#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an array of integers,
	* followed by a new line.
	* @a: pointer of int
	* @n: number of elem to print
	* Return: void
	*/
void print_array(int *a, int n)
{
	int i;
	/* start at start obviously */
	i = 0;
	while (i <= n - 1)
	{
		/* add comma if not last */
		printf("%d%s", *a, i == n - 1 ? "" : ", ");
		a++;
		i++;
	}
	putchar('\n');
}
