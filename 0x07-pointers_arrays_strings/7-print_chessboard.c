#include "main.h"

/**
  * print_chessboard - prints the chessboard.
	* @str_ptr: pointer of char
	* Return: void
	*/
void print_chessboard(char (*str_ptr)[8])
{
	/* variables */
	int col;
	char *row_ptr;
	/* copy pointer */
	row_ptr = *str_ptr;

	/* iterate using row ptr then push by a full row size */
	for (; *row_ptr != '\0'; row_ptr = row_ptr + 8)
	{
		/* get col by pushing with a size of a single value */
		for (col = 0; col < 8; col++)
		{
			_putchar(*(row_ptr + col));
		}
		_putchar('\n');
	}

}
