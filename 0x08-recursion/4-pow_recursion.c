#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y.
	* @x: number int
	* @y: number int
	* Return: int power
	*/
int _pow_recursion(int x, int y)
{
	/* cover base cases first */
	if (y < 0)
		return (-1);
	/* pow for  */
	if (y == 0)
		return (1);
	/* recourse */
	return (x * _pow_recursion(x, --y));
}
