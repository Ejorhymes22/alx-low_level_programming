/*#include "lists.h"

unsigned int len_list(dlistint_t *head)
{
	unsigned int a = 0;
	while (head)
	{
		head = head->next;
		a++;
	}
	return (a);
}

*/
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlist
 * @head: the head node
 * @index: index
 *
 * Return: 1 or -1
 */
/*

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h, *p, *temp;

	h = *head;
	if (*head || len_list(h) > index + 1)
		return (-1);

	if (index == 0 && (*head))
	{
		*head = (*head)->next;
		free(h);
		(*head)->prev = NULL;
		return (1);
	}
	while (index && h)
	{
		p = h;
		h = h->next;
		index--;
		temp = h->next;
	}
	if (index == 0 && h)
	{
		p->next = h->next;
		temp->prev = p;
		free(h);
		return (1);
	}
	return (-1);
}*/

#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
unsigned int len_list(dlistint_t *h)
{
	unsigned int nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

/**
 * delete_dnodeint_at_index - deltes a node in a doubly linked list
 * at a given index
 * @head: double pointer to the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || len_list(temp) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
