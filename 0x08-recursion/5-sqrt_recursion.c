#include "main.h"

/**
 * _sqrt_helper -  returns the natural square root of a number
 *
 * n: number whose squareroot is to be found
 * i: number that is current
 *
 * Return: square root of n that is natural or -1 if n has no natural squareroot
 */
int _sqrt_helper(int n, int i);
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
/**
 * _sqrt_recursion- returns the natural square root of a number
 * n: the number whose squareroot is to be found
 * Return: n or -1
 */
int _sqrt_recursion(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0));
	}
}
