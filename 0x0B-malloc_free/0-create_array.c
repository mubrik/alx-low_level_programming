#include "main.h"

/**
  * create_array - creates an array of chars,
	* and initializes it with a specific char.
	* @size: src pointer char
	* @c: src pointer char
	* Return: ptr to the array or NULL
	*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	/* save some cycle */
	if (size == 0)
		return (NULL);

	/* alloc space */
	arr = (char *) malloc(size * sizeof(char));

	/* sure malloc is successful */
	if (arr == NULL)
		return NULL;
	/* fill with character */
	for (index = 0; index < size; index++)
	{
		arr[index] = c;
	}

	return (arr);
}
