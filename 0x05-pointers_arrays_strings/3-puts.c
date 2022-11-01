#include "main.h"

/**
  * __puts - returns the length of a string. while loop
	* @str: pointer of char
	* Returns:  void
	*/
void __puts(char *str)
{
	/* checking if the current value of pointer not null */
	while (*str != '\0')
	{
		/* put/print value */
		_putchar(*str);
		/* move the pointer foward for loop */
		str++;
	}
	_putchar('\n');
}

/**
  * _puts - returns the length of a string. recursive
	* @str: pointer of char
	* Returns:  void
	*/
void _puts(char *str)
{
	/* checking if the value of pointer not null */
	if (*str != 0)
	{
		/* put/print value */
		_putchar(*str);
		str++;
		/* move the pointer foward and call the function again! */
		_puts(str);
	}
	else
	{
		/* the value is null, end of string, put new line */
		_putchar('\n');
	}
}
