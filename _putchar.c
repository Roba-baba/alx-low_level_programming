#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 *
 * @c: The character that is to print.
 *
 * Return: -1 is an error or 1 if success.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
