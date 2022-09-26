#include "main.h"
#include <stddef.h>

/**
 * _strchkr - locates a character in a string.
 * @str_ptr: Src ptr
 * @c: character to locate
 * Return: 1 if character exist, 0 if not
 */
int _strchkr(char *str_ptr, char c)
{
	/* simple iteration */
	while (*str_ptr != '\0')
	{
		if (*str_ptr == c)
		{
			/* changing to return int for simple bool check */
			return (1);
		}
		str_ptr++;
	}
	/* changing to return int for simple bool check */
	return (0);
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @str_ptr: the string
 * @accept: characters
 * Return: char * if exist, else NULL
 */
char *_strpbrk(char *str_ptr, char *accept)
{
	/* copy pointer */
	char *src_ptr, *accept_ptr;

	src_ptr = str_ptr;
	accept_ptr = accept;

	while (*src_ptr != '\0')
	{
		/* check if string in accept */
		if (_strchkr(accept_ptr, *src_ptr))
		{
			/* string is in,return pointer/address */
			return (src_ptr);
		}
		src_ptr++;
	}

	return (NULL);
}
