#include "main.h"

/**
  * _strlen_recursion - returns the length of a string.
	* @src_ptr: pointer of char
	* Return: int length
	*/
int _strlen_recursion(char *src_ptr)
{
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
  * _strcpycustom - copies the string pointed to by src adds new line,
	* including the terminating null byte (\0), to the buffer pointed to by dest
	* @dest: pointer dest of char
	* @src: pointer src of character
	* Return: void
	*/
char *_strcpycustom(char *dest, char *src)
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
	*dest = '\n';

	return (first);
}


/**
  * **argstostr - concatenates all the arguments of your program.
	* @ac: arguement count
	* @av: ptr to ptr arguement valu
	* Return: ptr to the str or null
	*/
char *argstostr(int ac, char **av)
{
	int index, arv_size, base_str_len;
	char *ptr;

	/* base check */
	if (ac == 0 || av == NULL)
		return (NULL);

	arv_size = 0;
	/* get total size to aloc */
	for (index = 0; index < ac; index++)
	{
		arv_size += _strlen_recursion(av[index]);
	}
	/* allocte size, ac for accomading new line and +1 for null byte */
	ptr = (char *) malloc(((arv_size + ac) * sizeof(char)) + 1);
	/* add each arg to ptr */
	base_str_len = 0;
	for (index = 0; index < ac; index++)
	{
		_strcpycustom((ptr + base_str_len), av[index]);
		base_str_len += _strlen_recursion(av[index]) + 1;
	}

	return (ptr);
}
