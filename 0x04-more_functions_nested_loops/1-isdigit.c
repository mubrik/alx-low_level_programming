#include "main.h"

/**
  * _isdigit - checks if int in range 0-9
	* @c: integer to check
	* Return: 1 if digit, 0 if not
	*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
