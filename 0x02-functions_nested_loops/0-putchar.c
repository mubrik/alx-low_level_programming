#include "main.h"

/**
 * main - Main function entry point
 * Return: Always 0
 * Description: print out putchar and newline
 */
int main(void)
{
	int arr_for_ascii[8] = {95, 112, 117, 116, 99, 104, 97, 114 };
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(arr_for_ascii[i]);
	}
	_putchar('\n');
	return (0);
}
