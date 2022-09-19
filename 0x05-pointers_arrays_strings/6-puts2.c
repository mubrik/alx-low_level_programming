#include "main.h"

/**
  * puts2 - prints every other character of a string,
	* starting with the first character, followed by a new line.
	* @str: pointer of char
	* Return: void
	*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		/* increment by one then check value! */
		/* so as not to skip the nul byte! */
		str++;
		if (*str == '\0')
			break;
		str++;
	}
	_putchar('\n');

}
