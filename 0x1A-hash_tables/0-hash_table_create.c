#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
	{
		free(h_table);
		return (NULL);
	}

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
