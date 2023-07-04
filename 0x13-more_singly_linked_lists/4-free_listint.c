#include "lists.h"

/**
 * free_listint - is used in freeing a list.
 *
 * @head: is the struct head.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head != NULL)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}

}
