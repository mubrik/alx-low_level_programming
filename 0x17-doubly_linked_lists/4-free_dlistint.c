#include "lists.h"

/**
 * free_dlistint - frees memory of dlistint_t list.
 * @head: pto to head ptr to list first elem
 * @n: n for new node
 *
 * Return: ptr to new node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (!head)
		return;
	/* make sure start of node, not necessary but alx gon alx */
	while (head)
	{
		if (!head->prev)
			break;
		head = head->prev;
	}
	/* iterate foward and free */
	while (head)
		next = head->next, free(head), head = next;

}
