#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - is used to add a node.
 *
 * @head: dereferenced head address.
 *
 * @str: the string.
 *
 * Return: the address of new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int index = 0;

	while (str[index])
		index++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = index;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
