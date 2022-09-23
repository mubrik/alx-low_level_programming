#include "main.h"

/**
  * capitalize - capitalize a single string
	* @str_pointer: str pointer
	* Return: cap string
	*/
char *capitalize(char *str_pointer)
{
	/* check if alpha */
	if (*str_pointer >= 'a' && *str_pointer <= 'z')
	{
		/* remove ascii 32 to make upper */
		*str_pointer = *str_pointer - 32;
	}

	return (str_pointer);
}

/**
  * cap_string - capitalizes all words of a string
	* @str_pointer: str pointer
	* Return: str_pointer
	*/
char *cap_string(char *str_pointer)
{
	char *start_pointer;

	start_pointer = str_pointer;
	/* capitalize fist word */
	capitalize(start_pointer);

	while (*start_pointer != '\0')
	{
		/* conditionlly check space behind current pointer */
		if (*(start_pointer - 1) == ' ' ||
			*(start_pointer - 1) == '\t' || *(start_pointer - 1) == '.' ||
			*(start_pointer - 1) == ',' ||	*(start_pointer - 1) == '!' ||
			*(start_pointer - 1) == ';' ||	*(start_pointer - 1) == '?' ||
			*(start_pointer - 1) == '\n'|| *(start_pointer - 1) == '(' ||
			*(start_pointer - 1) == ')'|| *(start_pointer - 1) == '{' ||
			*(start_pointer - 1) == '}'|| *(start_pointer - 1) == '"' )
		{
			capitalize(start_pointer);
		}

		/* move pointer */
		start_pointer++;
	}

	return (str_pointer);

}
