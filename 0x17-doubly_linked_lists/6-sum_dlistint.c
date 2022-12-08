#include "lists.h"

/**
 * sum_dlistint - sums the numbers of a dlistint_t.
 * @head: pto to head ptr to list first elem
 * Return: ptr to new node.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	/* make sure start of node, not necessary but alx gon alx */
	while (head)
	{
		if (!head->prev)
			break;
		head = head->prev;
	}
	/* iterate */
	while (head)
		sum += head->n, head = head->next;

	return (sum);
}
