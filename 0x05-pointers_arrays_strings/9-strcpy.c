#include "main.h"

/**
  * _strcpy - copies the string pointed to by src,
	* including the terminating null byte (\0), to the buffer pointed to by dest
	* @dest: pointer dest of char
	* @src: pointer src of character
	* Return: void
	*/
char *_strcpy(char *dest, char *src)
{
	char *first;

	/* copy first pointer */
	first = dest;

	/* iterate, end after hitting null byte */
	while (*src != '\0')
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
