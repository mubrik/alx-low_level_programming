#include "main.h"
#include <stdio.h>

/**
  * _strlen_custom - returns the length of a string.
	* @src_ptr: pointer of char
	* Return: int length
	*/
int _strlen_custom(char *src_ptr)
{
	/* checking if the current value of pointer not null */
	if (*src_ptr != '\0' && *src_ptr != ' ')
	{
		/* move the pointer foward and call the function again adding 1! */
		src_ptr++;
		return (1 + _strlen_custom(src_ptr));
	}

	return (0);
}

/**
  * _str_cpy_custom - copies the string pointed to by src adds new line,
	* including the terminating null byte (\0), to the buffer pointed to by dest
	* @dest: pointer dest of char
	* @src: pointer src of character
	* Return: void
	*/
char *_str_cpy_custom(char *dest, char *src)
{
	char *first;

	/* copy first pointer */
	first = dest;

	/* iterate, end after hitting null byte */
	while (*src != '\0' && *src != ' ')
	{
		/* assign value of source to dest */
		*dest = *src;
		/* push both pointers forward */
		src++;
		dest++;
	}

	/* add null pointer to last */
	*dest = '\0';

	return (first);
}

/**
  * _str_count - function that counts number of words in str.
	* @str: str pointer
	* Return: ptr to the array or null
	*/
int _str_count(char *str)
{
	int count;

	count = 0;
	/* iteration */
	while (*str != '\0')
	{
		/* current str is letter and next is space or nullbyte */
		if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
			count++;
		str++;
	}

	return (count);
}

/**
  * **strtow - function that splits a string into array of words.
	* @str: str pointer
	* Return: ptr to the array or null
	*/
char **strtow(char *str)
{
	int word_count, base_arr_index, str_len;
	char **arr, *word_ptr;

	/* Base check */
	if (str == NULL || *str == '\0')
		return (NULL);

	/* word count */
	word_count = _str_count(str);
	/* get array size */
	arr = (char **) malloc((sizeof(char *) * word_count) + 1);
	/* verify */
	if (arr == NULL || word_count == 0)
		return (NULL);
	/* logic baba */
	base_arr_index = 0;
	while (*str != '\0')
	{
		/* current str is letter and previous is space or nullbyte */
		if (*str != ' ' && (*(str - 1) == ' ' || *(str - 1) == '\0'))
		{
			/* get length */
			str_len = _strlen_custom(str);
			/* allocate space, + 1 null byte */
			word_ptr = (char *) malloc((sizeof(char) * str_len) + 1);
			/* verify */
			if (word_ptr == NULL)
				return (NULL);
			/* cpy string to pointer */
			arr[base_arr_index] = _str_cpy_custom(word_ptr, str);
			/* next arr */
			base_arr_index++;
		}
		str++;
	}

	/* last elem null */
	arr[word_count + 1] = NULL;

	return (arr);
}
