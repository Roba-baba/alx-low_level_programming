#include "main.h"

/**_puts_recursion will print a string
 * it will end in a new line
 * @s: prints string
 */

void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar(\n);
	}
}

