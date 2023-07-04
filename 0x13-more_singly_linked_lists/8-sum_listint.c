#include "lists.h"

/**
 * sum_listint - calculate sum as per the list.
 *
 * @head: is the head node.
 *
 * Return: value of the completed sum.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
