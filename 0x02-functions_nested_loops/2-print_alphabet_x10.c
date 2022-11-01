#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabet in low case 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		/* new line */
		_putchar('\n');
	}
}
