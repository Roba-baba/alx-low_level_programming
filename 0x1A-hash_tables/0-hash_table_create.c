#include "hash_tables.h"

/**
 * hash_table_create -  This creates a hash table.
 * @size: That is the size of the array.
 *
 * Return: NULL.
 *         or a pointer.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	if (table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
