#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: is the array size
 *
 * Return: index
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2((unsigned char *)key);
	return (i % size);
}
