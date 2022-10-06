#include "main.h"

/**
  * _strlen_recursion - returns the length of a string.
	* @src_ptr: pointer of char
	* Return: int length
	*/
int _strlen_recursion(char *src_ptr)
{
	if (src_ptr == NULL)
		return (0);
	/* checking if the current value of pointer not null */
	if (*src_ptr != '\0')
	{
		/* move the pointer foward and call the function again adding 1! */
		src_ptr++;
		return (1 + _strlen_recursion(src_ptr));
	}

	return (0);
}


/**
  * string_nconcat - concatenates two strings.
	* @str1: string ptr
	* @str2: string ptr
	* @n: string ptr
	* Return: ptr to the memory
	*/
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *new_str_ptr, *result_ptr;
	unsigned int index, size, strA_len, strB_len, strB;

	/* get string len */
	strA_len = _strlen_recursion(str1 == NULL ? "" : str1);
	strB = _strlen_recursion(str2 == NULL ? "" : str2);
	/*  only use n as str_len if its lower than actual strlen */
	strB_len = n >= strB ? strB : n;
	size = strA_len + strB_len;

	/* alloc space, +1 for null terminator */
	new_str_ptr = malloc((size + 1) * sizeof(char));
	/* copy */
	result_ptr = new_str_ptr;
	/* sure malloc is successful */
	if (new_str_ptr == NULL)
		return (NULL);

	/* fill with character for each str strA */
	for (index = 0; index < strA_len; index++)
	{
		*new_str_ptr = str1[index];
		new_str_ptr++;
	}
	for (index = 0; index < strB_len; index++)
	{
		*new_str_ptr = str2[index];
		new_str_ptr++;
	}
	/*  add nul terminator */
	result_ptr[size] = '\0';

	return (result_ptr);

}
