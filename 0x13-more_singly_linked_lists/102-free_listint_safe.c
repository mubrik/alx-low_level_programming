#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - prints all the elements of a listint_t list safe..
 * @head: head ptr to list first elem
 * Return: size of freed elem.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *node, *tmp;
	list_adrs_t *addr_h = NULL;

	if (!(*head))
		return (0);
	/* cp head */
	node = *head;

	/* iterate */
	while (node)
	{
		tmp = node->next;
		if (!_is_in_addlist(addr_h, (void *)node))
		{
			_add_nodeaddr(&addr_h, (void *)node);
			free(node);
		}
		else
		{
			_free_listaddr(addr_h);
			*head = NULL;
			return (count);
		}
		node = tmp, count++;
	}

	/* free our addr list */
	_free_listaddr(addr_h);
	/* set head to null */
	*head = NULL;
	return (count);
}
