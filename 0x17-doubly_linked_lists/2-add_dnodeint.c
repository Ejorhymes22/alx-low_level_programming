#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginnig of a list
 * @head: hte head node
 * @n: value of node
 *
 * Return: new element or null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	p->n = n;
	if (*head ==  NULL)
	{
		p->next = NULL;
		p->prev = *head;
		*head = p;
		return (*head);
	}
	p->prev = (*head)->prev;
	p->next = *head;
	(*head)->prev = p;
	*head = p;
	return (*head);
}
