#include "main.h"

/**
  * _realloc - allocates memory using malloc.
	* @ptr: numb of elem in arr
	* @old_size: old size in  byte
	* @new_size: new_size in  byte
	* Return: ptr to the memory or NULL upon failure
	*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	char *src_ptr, *dest_ptr;
	unsigned int index;

	/* base check */
	if (ptr == NULL && new_size > 0)
		return (malloc(new_size));
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	/* alloc new mem in heap */
	new_mem = malloc(new_size);
	/* typecasting to allow cpy */
	src_ptr = (char *) ptr;
	dest_ptr = (char *) new_mem;
	/* verify */
	if (new_mem == NULL)
		return (NULL);
	/* cp old to new */
	for (index = 0; index < old_size; index++)
	{
		dest_ptr[index] = src_ptr[index];
	}
	/* free up old ptr */
	free(ptr);
	return (new_mem);
}
