#include "main.h"

/**
 * factorial - will return factorial of a number
 *
 * n: number whose factorial should be found
 *
 * Return: factorial of n or -1 if n is a negative
 */
int factorial(int n);
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
