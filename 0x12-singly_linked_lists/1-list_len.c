#include <stdio.h>
#include "lists.h"


/**
 * list_len - returns the number of elements in a linked list_t list.
 * @head: head ptr to list first elem
 *
 * Return: list size .
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;
	list_t *next;

	/* cp first ptr, cast to remove const */
	next = (list_t *) head;

	/* iterate */
	while (next)
	{
		/* push */
		next = next->next, count++;
	}

	return (count);
}
