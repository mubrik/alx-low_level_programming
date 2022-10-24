#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a list_t list.
 * @head: ptr to head ptr to list first elem
 * @n: str to cpy to node
 *
 * Return: ptr to new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *next;

	/* alloc space */
	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);
	/* struct attribs */
	n_node->n = n, n_node->next = NULL;
	/* check null or first item */
	if (!(*head))
		*head = n_node;
	else
	{
		next = *head;
		/* basically push untill the next node is null then assign */
		while (next->next)
			next = next->next;
		/* next->next is null, so we set it to our node */
		next->next = n_node;
	}

	return (n_node);
}
