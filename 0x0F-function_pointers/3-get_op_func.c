#include <stdio.h>
#include "3-calc.h"

/**
 * array_iterator - function that searches for an integer.
 * @array : with actionable items
 * @size: size of arr
 * @cmp: func ptr to compare items
 * Return: Always void.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/* find matching object op_t in array */
	while (i < 6)
	{
		if (*s == *(ops[i].op_name))
			return ops[i].func_ptr;
		i++;
	}
	/* not found null */
	return (NULL);

}
