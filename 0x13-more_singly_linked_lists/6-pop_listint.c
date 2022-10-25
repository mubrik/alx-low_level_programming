#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: head ptr to ptr list first elem
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n_value;

	if (!(*head))
		return (0);
	/* cp the *head ptr */
	node = *head;
	/* cp value, cp next to head, free the fmr ptr add. */
	n_value = (*head)->n, *head = (*head)->next, free(node);
	/* ret value */
	return (n_value);
}
