#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node of dlistint_t at a given index.
 * @head: pto to head ptr to list first elem
 * @idx: index to add new node
 * @n: n for new node
 * Return: ptr to new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
	unsigned int idx, int n)
{
	dlistint_t *node = NULL, *tmp = NULL, *prev = NULL;
	unsigned int i = 0;

	if (!head)
		return (tmp);

	/* make sure start of node, not necessary but alx gon alx */
	tmp = *head;
	while (tmp)
	{
		if (!tmp->prev)
			break;
		tmp = tmp->prev;
	}
	/* iterate */
	while (tmp)
	{
		if (idx == i)
		{
			node = malloc(sizeof(dlistint_t));
			if (!node)
				return (NULL);
			prev = tmp->prev;
			/* add atributes and change postions */
			prev->next = node, tmp->prev = node;
			node->prev = prev, node->next = tmp, node->n = n;
			break;
		}
		tmp = tmp->next, i++;
	}

	return (tmp);
}
