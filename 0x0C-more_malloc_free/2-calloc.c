#include "main.h"

/**
  * _calloc - allocates memory using malloc.
	* @nmemb: numb of elem in arr
	* @size: size of byte
	* Return: ptr to the memory or NULL upon failure
	*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = calloc(nmemb, size);

	if (result == NULL)
		return (NULL);

	return (result);
}
