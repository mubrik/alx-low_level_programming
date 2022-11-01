#include <stdio.h>
#include "lists.h"

/**
  * _strlen - returns the length of a string.
	* @src_ptr: pointer of char
	* Return: int length
	*/
int _strlen(char *src_ptr)
{
	/* checking if the current value of pointer not null */
	if (*src_ptr != 0)
	{
		/* move the pointer foward and call the function again adding 1! */
		src_ptr++;
		return (1 + _strlen(src_ptr));
	}

	return (0);
}

/**
 * print_list - function that prints all the elements of a list_t list.
 * @head: head ptr to list first elem
 *
 * Return: list size .
 */
size_t print_list(const list_t *head)
{
	size_t count = 0, len = 0;
	list_t *next;

	/* cp first ptr, cast to remove const */
	next = (list_t *) head;

	/* iterate */
	while (next)
	{
		if (next->str) /* get length */
			len = _strlen(next->str);
		printf("[%ld] %s\n", len, (next->str) ? next->str : "(nil)"), len = 0;
		/* push */
		next = next->next, count++;
	}

	return (count);
}
