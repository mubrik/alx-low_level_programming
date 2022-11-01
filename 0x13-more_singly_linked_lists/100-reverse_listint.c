#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - that reverses a listint_t linked list.
 * @head: ptr ot head ptr to list first elem
 * Return: head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (!(*head))
		return (NULL);
	/* for first */
	prev_node = NULL;

	/* iterate */
	while (*head)
	{
		/* cp the next node address */
		next_node = (*head)->next;
		/* change the next node ptr t */
		(*head)->next = prev_node;
		/* cp thc curr node add to prev */
		prev_node = *head;
		/* move node */
		*head = next_node;
	}
	/* prev node will be node before null */
	*head = prev_node;
	return (prev_node);
}
