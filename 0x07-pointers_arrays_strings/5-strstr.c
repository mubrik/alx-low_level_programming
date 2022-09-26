#include "main.h"
#include <stddef.h>

/**
  * _strlen - recursive? returns the length of a string.
	* @s: pointer of char
	* Return: int length
	*/
int _strlen(char *s)
{
	/* checking if the current value of pointer not null */
	if (*s != 0)
	{
		/* move the pointer foward and call the function again adding 1! */
		s++;
		return (1 + _strlen(s));
	}

	return (0);
}

/**
 * match_str - searches a string for specific match
 * @str_ptr: the string
 * @match_ptr: characters
 * Return: 1 if exact match, else 0
 */
int match_str(char *str_ptr, char *match_ptr)
{
	int match_len, index;
	/* get str len of match */
	match_len = _strlen(match_ptr) - 1;
	/* match all characters */
	for (index = 0; index <= match_len; index++)
	{
		if (*(str_ptr + index) != *(match_ptr + index))
		{
			return (0);
		}
	}
	return (1);
}


/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: characters to find
 * Return: char * if exist, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		/* check for the first match*/
		if (*haystack == *needle)
		{
			/* check if the rest matches */
			if (match_str(haystack, needle))
			{
				/* if all matchs return the ptr/address */
				return (haystack);
			}
		}
		/* move haystack */
		haystack++;
	}

	return (NULL);

}
