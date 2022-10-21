#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pto to head ptr to list first elem
 * @str: str to cpy to node
 *
 * Return: ptr to new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node, *tmp;
	char *str_dup;
	/* null chk */
	if (!str)
		return (NULL);
	/* alloc space */
	node = malloc(sizeof(list_t));
	str_dup = strdup(str);
	/* null check */
	if ((!node) || str_dup == NULL)
		return (NULL);
	/* struct attribs */
	node->str = str_dup, node->len = _strlen(str_dup);
	/* check if start of list */
	if (!(*head))
		node->next = NULL, *head = node;
	else /* swappp */
		tmp = *head, node->next = tmp, *head = node;
	return (node);
}
