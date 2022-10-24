#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head ptr to list first elem
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *node;
	/* simple check */
	if (!head)
		return;
	/* else iterate and free */
	node = head;
	while (node)
	{
		/* cp the next ptr/null to tmp, free the current ptr memory */
		tmp = node->next, free(node), node = tmp; /* cp the tmp ptr to node */
	}
}
