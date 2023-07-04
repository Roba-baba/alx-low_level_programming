#include "lists.h"

/**
 * free_listint2 - used to free list and sets  head to NULL.
 *
 * @head: is the head node.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		free(*head);
		*head = tmp->next;
	}
	*head = NULL;
}
