#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node of dlistint_t at a given index.
 * @head: pto to head ptr to list first elem
 * @index: index to add new node
 * Return: 0 if success -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *prev = NULL, *next = NULL;
	int status = -1;
	unsigned int i = 0;

	if (!head)
		return (status);
	/* make sure start of node, not necessary but alx gon alx */
	tmp = *head;
	while (tmp)
	{
		if (!tmp->prev)
			break;
		tmp = tmp->prev;
	}
	/* iterate */
	while (tmp)
	{
		if (index == i)
		{
			/* extract necessary ptr */
			prev = tmp->prev;
			next = tmp->next;
			/* if prev null starting index == 0, make next item start of list/null */
			if (!prev)
				*head = next;
			else
				prev->next = next;
			/* if next null, last item in list */
			if (next)
				next->prev = prev;
			free(tmp), status = 1;
			break;
		}
		tmp = tmp->next, i++;
	}

	return (status);
}
