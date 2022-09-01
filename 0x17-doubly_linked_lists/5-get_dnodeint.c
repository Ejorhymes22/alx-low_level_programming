#include "lists.h"

/**
 * get_dnodeint_at_index - nth node of a linked list
 * @head: the head
 * @index: the position
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;

	p = head;

	while (index && p)
	{
		p = p->next;
		index--;
	}
	if (index == 0 && p)
		return (p);
	return (NULL);
}
