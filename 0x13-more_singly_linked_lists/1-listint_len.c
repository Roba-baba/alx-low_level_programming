#include "lists.h"

/**
 * listint_len - is the length of the list.
 *
 * @h: struct that is to be traversed.
 *
 * Return: the amount of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
