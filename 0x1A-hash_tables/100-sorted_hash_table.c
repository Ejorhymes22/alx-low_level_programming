#include "hash_tables.h"


/**
 * shash_table_create - creates a hash table php way
 * @size: the size of the table
 *
 * Return: the table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int idx = 0;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t) * size);
	ht->shead = malloc(sizeof(shash_node_t));
	ht->stail = malloc(sizeof(shash_node_t));

	for (;idx <  size; idx++)
	{
		if (idx == 0)
			ht->shead = ht->array[idx];
		ht->array[idx] = NULL;
		if (idx == size - 1)
			ht->stail = ht->array[idx];
	}
	return (ht)
}


/**
 * shash_table_set - sets or inserts a key/value in a table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: integer
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *tmp;
	
	
	idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[idx];

	if (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
		}

