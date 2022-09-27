#include "main.h"

/**
  * print_chessboard - prints the chessboard.
	* @arr_2d: pointer to ptr
	* Return: void
	*/
void print_chessboard(char (*arr_2d)[8])
{
	int index, col;

	index = 0;
	while (index < 8)
	{
		/* get col by pushing with a size of a single value */
		for (col = 0; col < 8; col++)
		{
			_putchar(arr_2d[index][col]);
		}
		_putchar('\n');
		index++;
	}

}
