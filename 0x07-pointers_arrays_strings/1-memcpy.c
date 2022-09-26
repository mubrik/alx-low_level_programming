#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * pointed to by src_ptr to memory area dest_ptr
 * @src_ptr: Src ptr
 * @dest_ptr: dest ptr
 * @n: number to fill
 * Return: char * pointer to dest area
 */
char *_memcpy(char *dest_ptr, char *src_ptr, unsigned int n)
{
	/* variables */
	char *memspace;

	/* copy memspace ptr/address */
	memspace = dest_ptr;
	/* iterate while decrementing n */
	while (n--)
	{
		/* fill byte and push forward */
		*memspace = *src_ptr;
		memspace++;
		src_ptr++;
	}

	return (dest_ptr);
}
