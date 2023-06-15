#include "main.h"

/**
 * _strlen_recursion - Returns length of a string.
 * @s: The string being  measured.
 *
 * Return: The length of the string.
 *
 * By: Roba-guru
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
