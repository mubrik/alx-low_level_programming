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
	int i = 0, left = 0, right = size - 1, mid;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < (int) size; i++)
		printf("%d%s", array[i], i == (int)(size - 1) ? "\n" : ", ");

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d%s", array[i], i == right ? "\n" : ", ");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
