#include <stdio.h>
#include "lists.h"

/**
 * _add_nodeaddr - adds a new node at the beginning of a listint_t.
 * @head: ptr to head ptr to list first elem
 * @addr: number
 * Return: ptr to new node.
 */
list_adrs_t *_add_nodeaddr(list_adrs_t **head, void *addr)
{
	list_adrs_t *n_node;

	/* alloc space */
	n_node = malloc(sizeof(list_adrs_t));
	if (!n_node)
		exit(98); /* replace with fail? */
	/* struct attribs */
	n_node->address = (uintptr_t) addr;
	/* swappp */
	n_node->next = *head, *head = n_node;
	return (n_node);
}

/**
 * _is_in_addlist - checks for an address in  a list_adrs_t.
 * @head: ptr to head ptr to list first elem
 * @addr: adress
 * Return: 1 if in, 0 else
 */
int _is_in_addlist(list_adrs_t *head, void *addr)
{
	list_adrs_t *node;

	node = head;
	if (!node)
		return (0);
	/* iterate */
	while (node)
	{
		if (node->address == ((uintptr_t) addr))
			return (1);
		node = node->next;
	}
	return (0);
}

/**
 * _free_listaddr - function that frees a listint_t list.
 * @head: head ptr to list first elem
 * Return: void
 */
void _free_listaddr(list_adrs_t *head)
{
	list_adrs_t *tmp, *node;
	/* simple check */
	if (!head)
		return;
	/* else iterate and free */
	node = head;
	while (node)
	{
		/* cp the next ptr/null to tmp, free the current ptr memory */
		tmp = node->next, free(node), node = tmp; /* cp the tmp ptr to node */
	}
}

/**
 * print_listint_safe - prints all the elements of a listint_t list safe..
 * @head: head ptr to list first elem
 * Return: list size .
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
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
			printf("[%p] %d\n", (void *)node, node->n);
		}
		else
		{
			printf("-> [%p] %d\n", (void *) node, node->n);
			_free_listaddr(addr_h);
			return (count);
		}
		/* push */
		node = node->next, count++;
	}

	/* free our addr list */
	_free_listaddr(addr_h);
	return (count);
}
