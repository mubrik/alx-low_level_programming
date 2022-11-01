#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @str_ptr: Src ptr
 * @c: character to locate
 * Return: pointer if located, NULL else
 */
char *_strchr(char *str_ptr, char c)
{
	/* pointer to return */
	char *result_ptr = NULL;

	/* cover base case, null byte */
	if (c == '\0')
	{
		while (*str_ptr != '\0')
		{
			/* push pointer till we get to null then return it */
			str_ptr++;
		}
		return (str_ptr);
	}

	/* simple iteration */
	while (*str_ptr != '\0')
	{
		if (*str_ptr == c)
		{
			result_ptr = str_ptr;
			break;
		}
		str_ptr++;
	}

	return (result_ptr);
}
