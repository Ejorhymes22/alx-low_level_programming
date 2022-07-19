#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of the node
 * @head: head of the node pointer
 * @n: value of a node
 *
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *relay;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
	}
	relay = *head;
	while (relay->next)
		relay = relay->next;
	relay->next = new;
	new->n = n;
	new->next = NULL;

	return (new);
}
