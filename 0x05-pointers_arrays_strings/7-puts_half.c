#include "main.h"

/**
  * _strlen - returns the length of a string.
	* @s: pointer of char
	* Return: int length
	*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}

/**
  * puts_half - prints half of a string, followed by a new line.,
	* @str: pointer of char
	* Return: void
	*/
void puts_half(char *str)
{
	int start, str_len;
	/* get len of str */
	str_len = _strlen(str);
	/* if even start from half, if not equation */
	if (str_len % 2 == 0)
		start = str_len / 2;
	else
		start = (str_len - 1) / 2;

	/* iterate until 1 lss than */
	while (start < str_len)
	{
		/* print value of pointer after moved by start */
		_putchar(*(str + start));
		/* move pointer foward */
		start++;
	}
	_putchar('\n');
}
