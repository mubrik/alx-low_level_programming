#include "main.h"

/**
  * _isupper - checks if int is uppercase character
	* @c: integer to chect
	* Return: 1 if upper, 0 if lower
	*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
