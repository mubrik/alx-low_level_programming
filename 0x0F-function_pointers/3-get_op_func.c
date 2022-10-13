#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function that searches for an integer.
 * @s : ptr to string
 * Return: int or null
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
	while (i < 5)
	{
		if (*(ops[i].op_name) == *s)
			return (ops[i].func_ptr);
		i++;
	}
	/* not found null */
	return (NULL);

}
