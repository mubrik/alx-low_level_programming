#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - prints all the elements of a listint_t list safe..
 * @head: head ptr to list first elem
 * Return: list size .
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node;
	list_adrs_t *addr_h = NULL;

	/* cp first ptr, cast to remove const */
	node = (listint_t *) head;

	/* iterate */
	while (node)
	{
		if (!_is_in_addlist(addr_h, (void *)node))
		{
			_add_nodeaddr(&addr_h, (void *) node);
		}
		else
		{
			_free_listaddr(addr_h);
			return (node);
		}
		/* push */
		node = node->next;
	}

	/* free our addr list */
	_free_listaddr(addr_h);
	return (NULL);
}
