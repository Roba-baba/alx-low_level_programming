#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates ordered min to max array of integers.
 *
 * @min: first value of the array.
 * @max: last value of the array.
 *
 * Return: min > max or NULL if the function has failled.
 *         Otherwise - a pointer to the created array.
 *
 * By: Roba-guru
 */
int *array_range(int min, int max)
{
	int *array, k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		array[k] = min++;

	return (array);
}
