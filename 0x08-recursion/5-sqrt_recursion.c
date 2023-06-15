#include "main.h"

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number whose square root is to be found.
 * @root: The root being tested.
 *
 * Return: If it has natural square root - the square root.
 *         If it does not have a natural square root - -1.
 */

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be found.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
