#include "main.h"

/**
  * recourse - recourse to find squ root.
	* @sqr: start, usually 0
	* @n: number to find sq root of
	* Return: int square root
	*/
int recourse(int sqr, int n)
{
	int result;
	/* base case confirm start lower  */
	if (sqr > (n / 2))
		return (sqr);
	/* calculate square */
	result = sqr * sqr;
	/* base case check square rsult */
	if (result == n)
		return (sqr);
	/* call recourse with incremented sqr */
	return (recourse(++sqr, n));
}

/**
  * _sqrt_recursion - returns the natural square root of a number.
	* @n: number int
	* Return: int square root
	*/
int _sqrt_recursion(int n)
{
	int ans;

	/* cover base cases first */
	if (n == 1)
		return (1);
	/* get res */
	ans = recourse(1, n);
	/* verify */
	if ((ans * ans) == n)
		return (ans);

	return (-1);
}
