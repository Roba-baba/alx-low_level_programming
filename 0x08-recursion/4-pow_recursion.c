#include "main.h"

/**
 * _pow_recursion - will return the value of x raised to the power of y
 *
 * x: base value
 * y: exponent value
 *
 * Return: results x raised power y or a -1 if y is negative
 *
 */
int _pow_recursion(int x, int y);
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0);
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
