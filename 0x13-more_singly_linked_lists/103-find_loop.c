#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - prints all the elements of a listint_t list safe..
 * @head: head ptr to list first elem
 * Return: list size .
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev_node;
	int flag = 0;
	/* list_adrs_t *addr_h = NULL; */

	/* cp first ptr, cast to remove const */
	prev_node = NULL;

	/* iterate */
	while (head)
	{
		if (prev_node != NULL)
		{
			if (((uintptr_t) head) < ((uintptr_t) prev_node))
				flag = 1;
		}
		if (flag)
			break;
		printf("looping");
		/* push */
		prev_node = head, head = head->next;
	}

	/* free our addr list */
	/* _free_listaddr(addr_h); */
	return (head);
}
