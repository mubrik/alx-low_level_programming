#include "main.h"

/**
  * *_puts_recursion -  prints a string, followed by a new line.
	* @src_ptr: src pointer char
	* Return: void
	*/
void _puts_recursion(char *src_ptr)
{
	/* checking if the value of pointer not null */
	if (*src_ptr != 0)
	{
		/* put/print value */
		_putchar(*src_ptr);
		src_ptr++;
		/* move the pointer foward and call the function again! */
		_puts_recursion(src_ptr);
	}
	else
	{
		/* the value is null, end of string, put new line */
		_putchar('\n');
	}
}
