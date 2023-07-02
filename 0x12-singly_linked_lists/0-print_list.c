#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linkedlist.
 * @h: is the linked list.
 *
 * Return: the number of nodes.
 *
 * By: Roba-guru.
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
