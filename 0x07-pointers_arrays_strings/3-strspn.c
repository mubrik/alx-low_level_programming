#include "main.h"

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
 * _strspn - gets the length of a prefix substring.
 * @str_ptr: the string
 * @accept: characters
 * Return: int, len.
 */
unsigned int _strspn(char *str_ptr, char *accept)
{
	/* copy pointer */
	char *src_ptr, *accept_ptr;

	src_ptr = str_ptr;
	accept_ptr = accept;

	/* recursive */
	/* check if string in accept */
	if (_strchkr(accept_ptr, *src_ptr))
	{
		/* string is in, push forward and call again adding 1 */
		src_ptr++;
		return (1 + _strspn(src_ptr, accept_ptr));
	}
	/* recursive base condition */
	return (0);
}
