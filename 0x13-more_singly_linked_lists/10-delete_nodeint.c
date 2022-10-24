#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head ptr list first elem
 * @index: index of elem
 * Return: the node ptr
 */
listint_t *_get_nodeint_at_index(listint_t *head, unsigned int index)
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

/**
 * delete_nodeint_at_index - inserts a new node at a given position..
 * @head: head ptr to ptr list first elem
 * @index: index of elem
 * Return: the node ptr
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *d_node;
	/* check */
	if (!(*head))
		return (-1);
	node = *head; /* cp ptr address */
	if (index == 0)
	{
		*head = node->next, free(node);
		return (1);
	}
	node = _get_nodeint_at_index(node, index - 1);
	if (!node)
		return (-1);
	d_node = node->next; /* node to delete */
	if (!d_node)
		return (1); /* if null */
	node->next = d_node->next; /* asiigne its next node to curr node */
	free(d_node); /* free deleted node mem */
	return (1);
}
