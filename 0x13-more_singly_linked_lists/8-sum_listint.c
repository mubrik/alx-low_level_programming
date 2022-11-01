#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list.
 * @head: head ptr to ptr list first elem
 * Return: sum n
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *node;
	/* check */
	if (!head)
		return (0);
	node = head; /* cp ptr address */
	while (node)
		sum += node->n, node = node->next; /* cp next to node, and increment */
	return (sum);
}
