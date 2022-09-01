#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the head node
 * @n: value
 *
 * Return: node/
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *p;

	p = *head;
	h = malloc(sizeof(dlistint_t));
	if (!h)
	{
		free(h);
		return (NULL);
	}
	h->n = n;
	if (*head == NULL)
	{
		h->prev = *head;
		h->next = NULL;
		*head = h;
		return (h);
	}
	while (p->next)
		p = p->next;

	h->prev = (p);
	h->next = NULL;
	(p)->next = h;
	return (h);
}
