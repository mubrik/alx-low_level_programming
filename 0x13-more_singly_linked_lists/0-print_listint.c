#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list..
 * @head: head ptr to list first elem
 * Return: list size .
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;
	listint_t *n_node;

	/* cp first ptr, cast to remove const */
	n_node = (listint_t *) head;

	/* iterate */
	while (n_node)
	{
		printf("%d\n", n_node->n);
		/* push */
		n_node = n_node->next, count++;
	}

	return (count);
}
