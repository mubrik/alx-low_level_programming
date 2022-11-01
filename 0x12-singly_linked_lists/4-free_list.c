#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: head ptr to list first elem
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp, *next;
	/* simple check */
	if (!head)
		return;
	/* else iterate and free */
	next = head;
	while (next)
	{
		tmp = next->next; /* cp the next ptr/null */
		free(next->str); /* free the string memory first */
		free(next); /* free the current pointer memory */
		next = tmp; /* assign the cpied ptr to next */
	}
}
