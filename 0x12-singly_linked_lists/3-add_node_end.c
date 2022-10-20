#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: ptr to head ptr to list first elem
 * @str: str to cpy to node
 *
 * Return: ptr to new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *next;
	char *str_dup;
	/* gotta null check */
	if (!str)
		return (NULL);

	/* alloc space */
		node = malloc(sizeof(list_t));
		str_dup = strdup(str);
		/* null check */
		if ((!node) || (!str_dup))
			return (NULL);
		/* struct attribs */
		node->str = str_dup, node->len = _strlen(str_dup), node->next = NULL;

	/* check null */
	if (!(*head))
		*head = node;
	else
	{
		next = *head;
		/* basically push untill the next node is null then assign */
		while (next->next)
			next = next->next;
		/* next->next is null, so we set it to our node */
		next->next = node;
	}

	return (node);
}
