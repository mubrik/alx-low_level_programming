#include "main.h"

/**
  * strlen_rec - returns the length of a string.
	* @src_ptr: pointer of char
	* Return: int length
	*/
int strlen_rec(char *src_ptr)
{
	/* checking if the current value of pointer not null */
	if (*src_ptr != 0)
	{
		/* move the pointer foward and call the function again adding 1! */
		src_ptr++;
		return (1 + strlen_rec(src_ptr));
	}

	return (0);
}

/**
  * is_str_eq_rec - recursive. checks if palindrome
	* @src_ptr: pointer of char
	* @start_index: start index
	* @end_index: end index
	* @h_len: half len of str
	* Return: int
	*/
int is_str_eq_rec(char *src_ptr, int start_index, int end_index, int h_len)
{
	/* base case check for end of recursion */
	if (start_index >= h_len)
		return (1);
	/* check if values are not equal */
	if (*(src_ptr + start_index) != *(src_ptr + end_index))
		return (0);
	/* increment/decrement */
	start_index++;
	end_index--;
	/* recursion */
	return (is_str_eq_rec(src_ptr, start_index, end_index, h_len));
}

/**
  * is_palindrome - recursive. prints a string, in reverse.
	* @src_ptr: pointer of char
	* Return: int
	*/
int is_palindrome(char *src_ptr)
{
	int len, h_len;

	/* base check for empty str */
	if (*src_ptr == '\0')
		return (1);

	/* rec get len of string */
	len = strlen_rec(src_ptr);
	h_len = len / 2;
	/* rec check if equal */
	if (is_str_eq_rec(src_ptr, 0, len - 1, h_len))
		return (1);
	/* not equal */
	return (0);
}
