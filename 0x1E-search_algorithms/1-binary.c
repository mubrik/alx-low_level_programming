#include "search_algos.h"

/**
 * binary_search - Binary search algorithm for a value
 * @array: ptr to array
 * @size: size of arr
 * @value: value to search for
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0, low = 0, high = size - 1, mid;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < (int) size; i++)
	{
		printf("%d%s", array[i], i == (int)(size - 1) ? "\n" : ", ");
	}

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d%s", array[i], i == high ? "\n" : ", ");
		}
	}

	return (-1);
}
