#include "main.h"

/**
  * _strlen - recursive? returns the length of a string.
	* @s: pointer of char
	* Return: int length
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
  * rev_string - reverses a string.
	* followed by a new line.
	* @s: pointer of char
	* Return:  void
	*/
void rev_string(char *s)
{
	int length, h_length, index;
	char *start, *end, tmp;

	/* length of op */
	length = _strlen(s);
	h_length = length / 2;

	/* duplicate the pointers, matching their types */
	start = s;
	end = s;

	/* move end pointer to the end of string */
	while (*end)
		end++;

	/* while loop so end is currently at '\0' instaed of last char */
	/* going back one step to last char, wouldnt need this with for loop */
	end--;

	/* iterate till half length of string */
	index = 0;
	while (index < h_length)
	{
		/* swap the value of pointers */
		tmp = *end; /* store value of end pointer in temp */
		*end = *start; /* change end pointer to start pointer */
		*start = tmp; /* change value of end pointer to stored start value */

		index++; /* increment index */
		start++; /* increment start val for next iteration */
		end--; /* decrement end val for next iteration */
	}
}
