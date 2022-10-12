#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array : with actionable items
 * @size: size of arr
 * @action: func ptr to perform action
 * Return: Always void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int index;

	for (index = 0; index < size; index++)
		action(array[index]);
}
