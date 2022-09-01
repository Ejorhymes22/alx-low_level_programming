#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the head of node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	p = head;
	while (p)
	{
		free(head);
		p = p->next;
		head = p;
	}
	free(head);
}
