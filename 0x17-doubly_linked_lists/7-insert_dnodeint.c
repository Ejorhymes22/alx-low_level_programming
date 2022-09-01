#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts anew node at a givn position
 * @h: the head
 * @idx: the index
 * @n: num to ne inserted
 *
 * Return: addres of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *q, *new, *temp;
	unsigned int id = 0;

	p = *h;
	while (p)
	{
		p = p->next;
		id++;
	}
	if (id < idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	p = *h;
	if (idx == 0)
	{
		q = add_dnodeint(&p, n);
		return (q);
	}
	else if (idx == id)
	{
		q = add_dnodeint_end(&p, n);
		return (q);
	}
	id = 0;
	p = *h;
	while (id < idx)
	{
		q = p;
		p = p->next;
		id++;
	}
	new->n = n;
	temp = q->next;
	q->next = new;
	new->prev = q;
	new->next = temp;
	return (new);
}

