#include "search_algos.h"

/**
 * linear_search - Linear search algorithm for a value
 * @array: ptr to array
 * @size: size of arr
 * @value: value to search for
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
