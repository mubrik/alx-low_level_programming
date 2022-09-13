#include "main.h"
/**
 * _abs - computes the absolute value on an int
 * @n: the int
 * Return: int the computed vaue
 */
int _abs(int n)
{
	/* simple if check */
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
