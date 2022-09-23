#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase.
	* @str_pointer: str pointer
	* Return: upper cased string
	*/
char *string_toupper(char *str_pointer)
{
	char *start_ptr;
	/* store start */
	start_ptr = str_pointer;

	while (*str_pointer != '\0')
	{
		/* check if alpha */
		if (*str_pointer >= 'a' && *str_pointer <= 'z')
		{
			/* remove ascii 32 to make upper */
			*str_pointer = *str_pointer - 32;
		}

		/* move pointer */
		str_pointer++;
	}

	return (start_ptr);
}
