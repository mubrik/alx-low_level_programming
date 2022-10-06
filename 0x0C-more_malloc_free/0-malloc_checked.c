#include "main.h"

/**
  * malloc_checked - allocates memory using malloc.
	* @bufr_size: string ptr
	* Return: ptr to the memory
	*/
void *malloc_checked(unsigned int bufr_size)
{
	void *result = malloc(bufr_size);

	if (result == NULL)
		exit(98);

	return (result);
}
