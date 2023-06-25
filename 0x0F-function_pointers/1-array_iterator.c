#include "function_pointers.h"

/**
 * array_iterator - Executes a functio within given peremiters of an array elements.
 *
 * @array: array element.
 *
 * @size: legnth or size of given array.
 *
 * @action: A pointer to the function that is to beexecuted.
 *
 * By: Roba-guru.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
