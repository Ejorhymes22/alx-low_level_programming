#include "lists.h"

/**
 * insert_node_at_index - inserts a new node at a given position
 * @head: head pointer
 * @idx: index
 * @n: data at node
 *
 * Return: NULL, or address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *q, *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	q = *head;
	while (q)
	{
		if (i == idx - 1)
			break;
		q = q->next;
		i++;
	}
	if (*head == NULL || i != idx - 1 || !new)
		return (NULL);
	else
	{
		temp = q->next;
		q->next = new;
		new->n = n;
		new->next = temp;
		return (new);
	}
}
