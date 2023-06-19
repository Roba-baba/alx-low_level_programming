#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees dogs.
 *
 * @d: pointer to dog. 
 *
 * Return: void.
 *
 * By: Roba-guru.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
