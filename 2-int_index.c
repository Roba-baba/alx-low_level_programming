#include "function_pointers.h"

/**
 * int_index - Searche for integers in an array of integers.
 *
 * @array: array of integers.
 * @size: size or length of the array.
 *
 * @cmp: pointer to the function used in comparing values.
 *
 * Return: <= 0 - -1 or index of first element.
 *
 * By: Roba-guru.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
