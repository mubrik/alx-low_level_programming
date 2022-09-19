#include "main.h"
#include <stdio.h>

/**
  * _print_rev - recursive. prints a string, in reverse.
	* followed by a new line.
	* @s: pointer of char
	* Return:  void
	*/
void _print_rev(char *s)
{
	char tmp; /* to temporary store*/

	if (*s != 0)
	{
		tmp = *s;
		s++;
		print_rev(s);
		_putchar(tmp);
	}
}

/**
  * _strlen - recursive? returns the length of a string.
	* @s: pointer of char
	* Return: length
	*/
int _strlen(char *s)
{
	if (*s != 0)
	{
		s++;
		return (1 + _strlen(s));
	}

	return (0);
}

/**
  * print_rev - prints a string, in reverse.
	* followed by a new line.
	* @s: pointer of char
	* Return:  void
	*/
void print_rev(char *s)
{
	char len;
	/* get length */
	len = _strlen(s);
	/* decrement len and add val to pointer */
	while (len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
