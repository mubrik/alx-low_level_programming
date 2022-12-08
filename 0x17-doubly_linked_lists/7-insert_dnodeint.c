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
	dlistint_t *node = NULL, *tmp = NULL, *prev = NULL, *next = NULL;
	unsigned int i = 0;

	if (!head)
		return (tmp);
	tmp = *head;
	while (tmp)
	{
		if (!tmp->prev)
			break;
		tmp = tmp->prev;
	}
	if (!tmp && idx == 0)
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		node->n = n, node->next = next, node->prev = prev, *head = node;
	}
	else
	{
		while (tmp)
		{
			if (idx == i)
			{
				node = malloc(sizeof(dlistint_t));
				if (!node)
					return (NULL);
				prev = tmp->prev, next = tmp;
				if (!prev)
					*head = node;
				else
					prev->next = node;
				node->prev = prev, node->next = next, node->n = n, next->prev = node;
				break;
			}
			tmp = tmp->next, i++;
		}
	}
	return (node);
}
