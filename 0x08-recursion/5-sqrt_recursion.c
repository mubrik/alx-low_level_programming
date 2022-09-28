#include "main.h"

/**
  * recourse - recourse to find squ root.
	* @start: start, usually 0
	* @end: end, usually n
	* @mid: mid, usually mid of st+en
	* @n: number to find sq root of
	* Return: int square root
	*/
int recourse(int start, int end, int mid, int n)
{
	int result;
	/* calculate square */
	result = mid * mid;
	/* base case check square rsult */
	if (result == n)
		return (mid);
	/* base case confirm start lower  */
	if (start > end)
		return (mid);
	/* increment strt if res lower, else decrement end */
	if (result < n)
		start = mid + 1;
	else
		end = mid - 1;
	/* get the new middle */
	mid = (start + end) / 2;
	/* call recourse with incremented/decremented start/end */
	return (recourse(start, end, mid, n));
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
	ans = recourse(0, n, (0 + n) / 2, n);
	/* verify */
	if ((ans * ans) == n)
		return (ans);

	return (-1);
}
