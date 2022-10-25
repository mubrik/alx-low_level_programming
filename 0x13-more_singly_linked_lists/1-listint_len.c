#include <stdio.h>
#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @head: head ptr to list first elem
 * Return: list size.
 */
size_t listint_len(const listint_t *head)
{
	size_t count = 0;
	listint_t *n_node;

	/* cp first ptr, cast to remove const */
	n_node = (listint_t *) head;

	/* iterate */
	while (n_node)
	{
		n_node = n_node->next, count++;
	}

	return (count);
}
