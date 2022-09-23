#include "hash_tables.h"


/**
 * hash_table_delete - prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp, *new;

	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			free(tmp->key);
			free(tmp->value);
			new = tmp;
			tmp = tmp->next;
			free(new);
		}
		tmp = ht->array[idx];
		free(tmp);
		idx++;
	}
	free(ht->array);
	free(ht);
}
