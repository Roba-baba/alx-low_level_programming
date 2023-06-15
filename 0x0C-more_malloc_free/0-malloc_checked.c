#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc and exit if failure.
 * @b: integer used
 * Return: pointer to the array or NULL.
 *
 * By: Roba-guru
 */

void *malloc_checked(unsigned int b)
{
int *k = malloc(b);
if (k == 0)
	exit(98);

return (k);
}
