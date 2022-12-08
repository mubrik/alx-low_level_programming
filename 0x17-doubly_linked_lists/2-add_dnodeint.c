#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pto to head ptr to list first elem
 * @n: n for new node
 *
 * Return: ptr to new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	/* null chk */
	if (!head)
		return (NULL);
	/* alloc space */
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	/* make sure start of node, not necessary but alx gon alx */
	while (*head)
	{
		if (!((*head)->prev))
		{
			/* make curr head prev node our new node */
			(*head)->prev = node;
			break;
		}
		*head = (*head)->prev;
	}
	/* struct attribs, make new node next curr head */
	node->n = n, node->prev = NULL, node->next = *head;
	/* set new node to be head and return */
	*head = node;
	return (node);
}
