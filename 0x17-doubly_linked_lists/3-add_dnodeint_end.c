#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pto to head ptr to list first elem
 * @n: n for new node
 *
 * Return: ptr to new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *tmp = NULL;
	/* null chk */
	if (!head)
		return (NULL);
	/* alloc space */
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	/* get last node */
	if (*head)
	{
		tmp = *head;
		while (tmp)
		{
			if (!tmp->next)
				break;
			tmp = tmp->next;
		}
		/* point last node next to new node */
		tmp->next = node;
	}
	else
		*head = node;
	/* struct attribs, make new node prev last */
	node->n = n, node->prev = tmp, node->next = NULL;

	return (node);
}
