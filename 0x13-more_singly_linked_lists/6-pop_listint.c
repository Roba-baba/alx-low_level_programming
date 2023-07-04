#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list.
 *
 * @head: A pointer to the address of the head.
 *
 * Return: 0 if empty else the data of the head node.
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int del;

	if (*head == NULL)
		return (0);

	tmp = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (del);
}
