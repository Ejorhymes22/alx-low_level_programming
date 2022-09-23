#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * make_node - makes a new node
 * @key: the key
 * @value: value
 *
 * Return: pointer to node
 */

hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}


/**
 * hash_table_set - adds element tothe hash table
 * @ht: the pointer to the hash t
 * @key: the key
 * @value: of the key
 *
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *node;

	if (!ht || strcmp(key, "") == 0 || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	node = make_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
