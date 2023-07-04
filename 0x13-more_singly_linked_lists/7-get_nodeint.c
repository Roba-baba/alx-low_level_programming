#include "lists.h"

/**
 * get_nodeint_at_index - used to get index node.
 *
 * @head: is the head node.
 *
 * @index: is the index of node.
 *
 * Return: the node at index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp;

	tmp = head;
	while (counter != index && tmp != NULL)
	{
		counter++;
		tmp = tmp->next;
	}

	if (counter != index)
		return (NULL);
	return (tmp);
}
