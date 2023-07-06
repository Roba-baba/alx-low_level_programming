#include "main.h"

/**
 * clear_bit - sets value of bit to 0 for a specified index.
 *
 * @n: is an unsigned long int pointer.
 *
 * @index: the bit index.
 *
 * Return: 1 if successful or -1 if a failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int byte;

	if (index > 63)
	{
		return (-1);
	}

	byte = 1 << index;

	if (*n & byte)
	{
		*n ^= byte;
	}

	return (1);
}
