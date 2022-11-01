#include "main.h"

/**
 * print_alphabet - prints out alphabet in low case
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	/* new line */
	_putchar('\n');
}
