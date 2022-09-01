#include "lists.h"

/**
 * dlistint_len - number of elenemts in a d list
 * @h: head nod
 *
 * Return: num of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
