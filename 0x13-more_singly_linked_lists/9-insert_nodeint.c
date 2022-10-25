#include <stdio.h>
#include "lists.h"

/**
 * _get_nodeint_at_index - returns the nth node of a listint_t linked list.
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
 * insert_nodeint_at_index - inserts a new node at a given position..
 * @head: head ptr to ptr list first elem
 * @idx: index of elem
 * @n: number
 * Return: the node ptr
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *n_node;

	node = *head; /* cp ptr address */
	/* alloc mem  */
	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);
	if (n == 0)
	{
		n_node->n = n, n_node->next = node;
		return (n_node);
	}
	/* get node before insert position */
	node = _get_nodeint_at_index(node, idx - 1);
	if (!node)
		return (NULL); /* if prev node doesnt exist why bother? */
	/* assign new node's next to point to the current node next */
	n_node->n = n, n_node->next = node->next;
	/* assign current node next to point to new node */
	node->next = n_node;
	return (n_node);
}
