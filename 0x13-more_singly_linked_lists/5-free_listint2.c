#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: the head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	free(head);
	*head = NULL;
}
