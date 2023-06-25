#include "main.h"
#include <stdlib.h>

/**
 * *create_array - an array of char.
 *
 * @size: the size of the array.
 *
 * @c: char to be initialized.
 *
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
char *k = malloc(size);
if (size == 0 || k == 0)
	return (0);

while (size--)
	k[size] = c;

return (k);
}
