#include "main.h"

/**
  * print_rec - recursive. prints a string, in reverse.
	* followed by a new line.
	* @s: pointer of char
	* Return:  void
	*/
void print_rec(char *s)
{
	char tmp; /* to temporary store*/

	if (*s != '\0')
	{
		tmp = *s;
		s++;
		print_rec(s);
		_putchar(tmp);
	}
}

/**
  * print_rev - recursive. prints a string, in reverse.
	* followed by a new line.
	* @s: pointer of char
	* Return:  void
	*/
void print_rev(char *s)
{
	print_rec(s);
	_putchar('\n');
}
