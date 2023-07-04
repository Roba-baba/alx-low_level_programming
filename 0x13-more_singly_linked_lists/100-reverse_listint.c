#include "lists.h"

/**
 * reverse_listint - used to rReverses a listint_t list.
 *
 * @head: is a pointer to the address.
 *
 * Return: A pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
