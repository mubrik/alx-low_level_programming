#include "main.h"
#include <stdio.h>

/**
  * print_chessboard - prints the chessboard.
	* @ptr_to_ptr: pointer to ptr
	* Return: void
	*/
void print_chessboard(char (*ptr_to_ptr)[8])
{

	/* variables */
	int col;
	char *row_ptr;
	/* copy first value which is a pointer to the 1st row ptr/add */
	row_ptr = *ptr_to_ptr;

	/* iterate using row ptr then push by a full row size to
		* move pointer to start of current row
		*/
	while (*row_ptr != '\0')
	{
		/* get col by pushing with a size of a single value */
		for (col = 0; col < 8; col++)
		{
			_putchar(row_ptr[col]);
		}
		_putchar('\n');
		row_ptr = row_ptr + (sizeof(char) * 8);
	}

}
