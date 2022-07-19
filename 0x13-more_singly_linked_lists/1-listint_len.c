#include "lists.h"

/**
 * listint_len - returns the number fo elemnts in a linked list
 * @h: head list
 *
 * Return: no of lenemnts
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
		i++, h = h->next;
	return (i);
}
