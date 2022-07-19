#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head pointer
 * @index: index of the nth
 *
 * Return: NULL or index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	if (head == NULL || i != index)
		return (NULL);
	else
		return (head);
}
