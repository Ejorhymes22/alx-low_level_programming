#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the table
 * @key: pointer to the key
 *
 * Return: the value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
