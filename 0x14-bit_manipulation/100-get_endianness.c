#include "main.h"

/**
 * get_endianness - this checks the endianness.
 *
 * Return: 0 if big or 1 if small endian.
 */

int get_endianness(void)
{
	unsigned int byte;
	char *c;

	byte = 1;
	c = (char *) &byte;

	return ((int)*c);
}
