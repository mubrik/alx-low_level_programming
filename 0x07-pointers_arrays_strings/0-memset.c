#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by str_ptr with the constant byte b
 * @str_ptr: Memory ptr to fill
 * @byte: byte to fill with
 * @n: number to fill
 *
 * Return: pointer to memory area
 */
char *_memset(char *str_ptr, char byte, unsigned int n)
{
	/* varaibles */
	char *memspace;

	/* copy memspace ptr/address */
	memspace = str_ptr;
	/* iterate while decrementing n */
	while (n--)
	{
		/* fill byte and push forward */
		*memspace = byte;
		memspace++;
	}

	return (str_ptr);

}
