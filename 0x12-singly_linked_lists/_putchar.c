#include "lists.h"

/**
 * _putchar - prints character.
 *
 * @character: The character to be printed.
 *
 * Return: 1 if success or -1  if there is an error.
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
