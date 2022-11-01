#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array : with actionable items
 * @size: size of arr
 * @cmp: func ptr to compare items
 * Return: Always void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	/* early ret */
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	/* check cmp func */
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) > 0)
			return (index);
	}
	/* implicit no elem found */
	return (-1);
}
