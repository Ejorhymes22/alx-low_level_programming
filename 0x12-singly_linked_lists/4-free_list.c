#include "lists.h"

/**
 * free_list - frees a list
 * @head: the head pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *p;

	p = head;

	while (p)
	{
		free(p->str);
		p = p->next;
		free(head);
		head = p;
	}
	free(head);
}
