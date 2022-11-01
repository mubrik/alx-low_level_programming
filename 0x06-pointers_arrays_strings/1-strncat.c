#include "main.h"

/**
  * *_strncat - function that concatenates two strings
	* @dest_ptr: destination pointer char
	* @src_ptr: src pointer char
	* @n: number to add
	* Return: *char
	*/
char *_strncat(char *dest_ptr, char *src_ptr, int n)
{
	int no_of_iter;
	/* save pointer of start of dest */
	char *start_ptr;

	start_ptr = dest_ptr;

	/* get to the nul pointer of dest */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	no_of_iter = 0;

	/* now add dst value from nul ptr */
	while (*src_ptr != '\0' && no_of_iter < n)
	{
		*dest_ptr = *src_ptr;
		/* push both forward*/
		dest_ptr++;
		src_ptr++;
		no_of_iter++;
	}

	/* add null byte */

	return (start_ptr);
}
