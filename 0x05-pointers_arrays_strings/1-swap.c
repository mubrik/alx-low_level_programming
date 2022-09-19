#include "main.h"

/**
  * swap_int - swaps the values of two integers.
	* @a: pointer int
	* @b: pointer int
	*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
