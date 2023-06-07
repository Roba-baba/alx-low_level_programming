#include "main.h"


/**
 * _puts_recursion - that prints a string and a new line
 * @s - is the string to be printed
 * Return - always void
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
