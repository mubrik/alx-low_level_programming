#include "main.h"

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
  * _strcmp - function that compares two strings.
	* @s1_ptr: src 1 pointer char
	* @s2_ptr: src 2 pointer char
	* Return: 0 if equal -1 if s1 less than s2
	* +1 if greater
	*/
int _strcmp(char *s1_ptr, char *s2_ptr)
{
	int s1_len, s2_len, iter, max_iter, compare_res;

	/* get len of both */
	s1_len = _strlen(s1_ptr);
	s2_len = _strlen(s2_ptr);
	compare_res = 0;

	/* iterate using longer len*/
	max_iter = s1_len >= s2_len ? s1_len : s2_len;
	iter = 0;

	while (iter < max_iter)
	{
		/* compare val of pointers*/
		compare_res = *(s1_ptr + iter) - *(s2_ptr + iter);
		/* if not equal break */
		if (compare_res != 0)
			break;
		iter++;
	}

	return (compare_res);

}
