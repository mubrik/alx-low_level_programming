#include "main.h"

/**
  * __strlen - returns the length of a string.
	* @s: pointer of char
	* Return: int length
	*/
int __strlen(char *s)
{
	int len;

	len = 0;
	/* checking if the current value of pointer not null */
	while (*s != 0)
	{
		/* move the pointer foward and add 1 to len */
		s++;
		len++;
	}
	return (len);
}

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
