#include "main.h"

/**
  * _strlen_recursion - returns the length of a string.
	* @src_ptr: pointer of char
	* Return: int length
	*/
int _strlen_recursion(char *src_ptr)
{
	/* checking if the current value of pointer not null */
	if (*src_ptr != 0)
	{
		/* move the pointer foward and call the function again adding 1! */
		src_ptr++;
		return (1 + _strlen_recursion(src_ptr));
	}

	return (0);
}

/**
  * str_concat - concatenates two strings.
	* @str_ptr1: string ptr
	* @str_ptr2: string ptr
	* Return: ptr to the array or NULL
	*/
char *str_concat(char *str_ptr1, char *str_ptr2)
{
	char *new_str_ptr, *result_ptr;
	unsigned int index, size, strA_len, strB_len;

	/* get string len */
	strA_len = _strlen_recursion(str_ptr1 == NULL ? "" : str_ptr1);
	strB_len = _strlen_recursion(str_ptr2 == NULL ? "" : str_ptr2);
	size = strA_len + strB_len;

	/* alloc space, +1 for null terminator */
	new_str_ptr = (char *) malloc((size * sizeof(char)) + 1);
	/* copy */
	result_ptr = new_str_ptr;
	/* sure malloc is successful */
	if (new_str_ptr == NULL)
		return (NULL);

	/* fill with character for each str */
	for (index = 0; index < strA_len; index++)
	{
		*new_str_ptr = str_ptr1[index];
		new_str_ptr++;
	}
	for (index = 0; index < strB_len; index++)
	{
		*new_str_ptr = str_ptr2[index];
		new_str_ptr++;
	}
	/*  add nul terminator */
	*new_str_ptr = '\0';

	return (result_ptr);
}
