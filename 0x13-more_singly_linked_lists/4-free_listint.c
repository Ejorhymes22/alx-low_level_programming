#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
	free(head);
}
