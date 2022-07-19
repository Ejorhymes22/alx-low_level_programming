#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head pointer
 * @index: index
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *q, *temp;
	unsigned int i = 0;

	q = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(q);
		return (1);
	}

	while (i < index - 1)
	{
		if (!q || !(q->next))
			return (-1);
		q = q->next;
		i++;
	}
	temp = q->next;
	q->next = temp->next;
	free(temp);
	return (1);
}
