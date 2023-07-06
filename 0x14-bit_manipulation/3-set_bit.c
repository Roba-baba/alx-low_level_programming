#include "main.h"

/**
 * set_bit - will set bit value to 1 for a specified index.
 *
 * @n: a pointer of unsigned long int.
 *
 * @index: is a bit index.
 *
 * Return: 1 for success or -1 for failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int byte;

	if (index > 63)
		return (-1);

	byte = 1 << index;
	*n = (*n | byte);

	return (1);
}
