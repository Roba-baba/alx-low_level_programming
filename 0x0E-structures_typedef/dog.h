#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * It's a Header file that defines a new type struct called dog.
 *
 * struct dog - this type describes a dog.
 *
 * @name: Name of the dog being described.
 *
 * @age: Actual age of the dog.
 *
 * @owner: Owner of the dog being described.
 *
 * By: Roba-guru.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog above.
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
