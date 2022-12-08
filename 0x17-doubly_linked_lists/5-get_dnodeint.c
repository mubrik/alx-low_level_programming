#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node of a dlistint_t at a given index.
 * @head: pto to head ptr to list first elem
 * @index: n for new node
 *
 * Return: ptr to new node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (head);

	/* make sure start of node, not necessary but alx gon alx */
	while (head)
	{
		if (!head->prev)
			break;
		head = head->prev;
	}
	/* iterate */
	while (head)
	{
		if (index == i)
			return (head);
		head = head->next, i++;
	}

	return (head);
}
