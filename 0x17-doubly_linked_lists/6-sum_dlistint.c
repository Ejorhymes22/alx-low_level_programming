#include "lists.h"


/**
 * sum_dlistint - sum of a ll the data of a linked list
 * @head: head of node
 *
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
