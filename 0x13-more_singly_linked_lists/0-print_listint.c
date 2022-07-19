#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all the elements of a list
 * @h: the head pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
