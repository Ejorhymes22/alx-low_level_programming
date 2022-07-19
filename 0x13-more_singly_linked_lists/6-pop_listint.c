#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns the
 * head nodes data n.
 * @head: the head node
 *
 * Return: 0, or head nodes data n
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	n = (*head)->n;
	h = (*head)->next;
	free(*head);
	*head = h;

	return (n);
}
