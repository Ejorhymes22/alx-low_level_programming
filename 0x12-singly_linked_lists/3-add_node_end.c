#include "lists.h"

/**
 * add_node_end - adds a new node to the end of the list
 * @head: head of the node(head pointer)
 * @str: the sting element to be added
 *
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *p1;
	unsigned int i = 0;

	if (*head == NULL)
	{
		p = malloc(sizeof(list_t));
		if (!p)
			return (NULL);
		p->str = strdup(str);
		while (str[i])
			i++;
		p->len = i;
		*head = p;
		p->next = NULL;
		return (p);
	}
	i = 0;

	p = *head;
	while (p->next)
		p = p->next;
	p1 = malloc(sizeof(list_t));
	if (!p1)
		return (NULL);

	p1->str = strdup(str);

	while (str[i])
		i++;
	p1->len = i;

	p->next = p1;
	p1->next = NULL;
	return (p1);
}
