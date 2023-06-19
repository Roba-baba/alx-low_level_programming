#include "dog.h"

/**
* init_dog -  structure initialization for type dog.
*
* @name: pointer to name dog.
* 
* @d:pointer to structure dog.
*
* @age: given age of the dog.
*
* @owner: pointer to the owner of the dog.
*
* By: Roba-guru.
*
*return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
