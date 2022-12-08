#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list..
 * @head: head ptr to list first elem
 * Return: list size .
 */
size_t print_dlistint(const dlistint_t *head)
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
	{
		printf("%d\n", node->n);
		/* push */
		node = node->next, count++;
	}

	return (count);
}
