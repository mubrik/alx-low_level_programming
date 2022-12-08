#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints all the elements of a listint_t list..
 * @head: head ptr to list first elem
 * Return: list size .
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;
	dlistint_t *node;

	/* cp first ptr, cast to remove const */
	node = (dlistint_t *) head;

	/* make sure start of node, not necessary but alx gon alx */
	while (node)
	{
		if (!node->prev)
			break;
		node = node->prev;
	}
	/* iterate */
	while (node)
		node = node->next, count++;

	return (count);
}
