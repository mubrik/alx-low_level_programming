#include "search_algos.h"

/**
 * min - get the minimum value
 * @a: ptr to array
 * @b: size of arr
 * Return: int
 */
size_t min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	return (b);
}

/**
 * jump_search - Jump search algorithm for a value
 * @array: ptr to array
 * @size: size of arr
 * @value: value to search for
 * Return: index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, i, b = sqrt(size);

	if (!array)
		return (-1);

	i = min(b, size) - 1;
	while (array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		a = b;
		b = b + sqrt(size);
		i = min(b, size) - 1;
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, size);
	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (a == min(b, size))
			return (-1);
		a++;
	}

	if (array[a] == value)
		return ((int)a);
	return (-1);

}
