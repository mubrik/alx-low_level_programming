#include "main.h"

/**
  * *_strcat - function that concatenates two strings
	* @dest_ptr: destination pointer char
	* @src_ptr: src pointer char
	* Return: *char
	*/
char *_strcat(char *dest_ptr, char *src_ptr)
{
	/* save pointer of start of dest*/
	char *start_ptr;

	start_ptr = dest_ptr;

	/* get to the nul byte of dest */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* now add dst value from nul byte */
	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		/* push both forward*/
		dest_ptr++;
		src_ptr++;
	}

	/* add null byte */
	*dest_ptr = '\0';

	return (start_ptr);
}
