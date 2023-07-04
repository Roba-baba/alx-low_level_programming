#include "lists.h"

/**
 * free_listint2 - frees a list.
 *
 * Desc: head points to NULL up to the nail.
 *
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

}
