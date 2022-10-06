#include "main.h"
#include <stdio.h>

/**
  * array_range - creates an array of integers.
	* @min: min num of elem in arr
	* @max: size of byte
	* Return: ptr to the memory or NULL upon failure
	*/
int *array_range(int min, int max)
{
	int *arr_ptr, *result, size;
	/* base check */
	if (min > max)
		return (NULL);

	/* alloc memory */
	size = (max - min) + 1;
	arr_ptr = calloc(size, sizeof(min));
	/* verify */
	if (arr_ptr == NULL)
		return (NULL);
	/* copy */
	result = arr_ptr;
	/* iterate */
	while (min <= max)
	{
		*arr_ptr = min;
		min++;
		arr_ptr++;
	}
	return (result);
}
