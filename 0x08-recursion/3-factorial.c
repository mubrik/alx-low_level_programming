#include "main.h"

/**
  * factorial - returns the length of a string.
	* @n: number int
	* Return: int factorial
	*/
int factorial(int n)
{
	/* cover base cases first */
	if (n < 0)
		return (-1);
	/* factorial of both 0&1 is 1 */
	if (n <= 1)
		return (1);
	/* recourse */
	return (n * factorial(n - 1));
}
