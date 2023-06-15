#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string then a new line.
 * @a: the string to be printed
 * Return: always zero.
 * by Robert Oware.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
