#include "main.h"

/**
  * *_strncpy - function that copies a string.
	* @dest_ptr: destination pointer char
	* @src_ptr: src pointer char
	* @n: number to add
	* Return: *char
	*/
char *_strncpy(char *dest_ptr, char *src_ptr, int n)
{
	int no_of_iter;

	no_of_iter = 0;

	/* now add dst value from nul ptr */
	while (no_of_iter < n)
	{
		/* use iteration length to add to pointer */
		*(dest_ptr + no_of_iter) = *src_ptr;
		/* push iteraction forward */
		no_of_iter++;
		/* check if we hit null pointer, dont push forward if so */
		if (*src_ptr != '\0')
			src_ptr++;
	}

	return (dest_ptr);
}
