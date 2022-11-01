#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head ptr list first elem
 * @index: index of elem
 * Return: the node ptr
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;
	/* check */
	if (!head)
		return (NULL);
	node = head; /* cp ptr address */
	while (node && (i < index))
		node = node->next, i++; /* cp next to node, and increment */
	return (node);
}
