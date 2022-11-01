#include "main.h"

/**
  * is_divisible_by - returns 1 if n is divisible by
	* @n: number int
	* @by: number int
	* Return: 1 if diviisible else 0
	*/
int is_divisible_by(int n, int by)
{
	/* cover base cases first */
	if (n == by)
		return (0);
	/* get res */
	if (n % by == 0)
		return (1);
	return (is_divisible_by(n, by + 1));
}

/**
  * is_prime_number - returns 1 if the input integer is a prime number
	* otherwise return 0
	* @n: number int
	* Return: int result
	*/
int is_prime_number(int n)
{
	/* cover base cases first */
	if (n <= 2)
		return (0);
	/* get res */
	if (n % 2 == 0)
		return (0);
	if (is_divisible_by(n, 2))
		return (0);
	return (1);
}
