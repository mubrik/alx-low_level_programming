#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t.
 * @head: pto to head ptr to list first elem
 * @n: number
 * Return: ptr to new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	/* alloc space */
	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);
	/* struct attribs */
	n_node->n = n;
	/* check if start of list */
	if (!(*head))
		n_node->next = NULL, *head = n_node;
	else /* swappp */
		n_node->next = *head, *head = n_node;
	return (n_node);
}
