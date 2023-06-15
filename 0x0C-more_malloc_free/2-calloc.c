#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number.
 *
 *
 * @nmemb: number of elements.
 *
 *
 * @size: The byte size of an array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         or a pointer to the allocated memory.
 *
 * By: Roba-guru
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (k = 0; k < (size * nmemb); k++)
		filler[k] = '\0';

	return (mem);
}
