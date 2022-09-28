#include "main.h"

/**
  * _print_rev_recursion - recursive. prints a string, in reverse.
	* @src_ptr: pointer of char
	* Return:  void
	*/
void _print_rev_recursion(char *src_ptr)
{
	char tmp; /* to temporary store*/

	if (*src_ptr != '\0')
	{
		tmp = *src_ptr;
		src_ptr++;
		_print_rev_recursion(src_ptr);
		_putchar(tmp);
	}
}
