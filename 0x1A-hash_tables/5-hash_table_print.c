#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;
	int flag = 0;

	if (!ht)
		exit(1);
	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			flag = 1;
		}
		idx++;
	}
	printf("}\n");
}
