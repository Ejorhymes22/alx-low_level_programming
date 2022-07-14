#include "lists.h"

/**
 * add_node - add a new node at the begining of a list_t list
 * @head: head of the node(pointer)
 * @str: string to be duplicated
 *
 * Return: pointer to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	unsigned int len = 0;

	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);

	p->str = malloc(sizeof(list_t));
	if (!(p->str))
	{
		free(p);
		return (NULL);
	}
	p->str = strdup(str);
	
	while (str[len])
		len++;

	p->len = len;

	p->next = *head;
	*head = p;
	return (*head);
}
