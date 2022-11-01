#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two diagonals
	* of a square matrix of integers.
	* @arr_ptr: pointer of char
	* @size: column size
	* Return: void
	*/
void print_diagsums(int *arr_ptr, int size)
{
	int max_row_index, row_index, right_diag_index, left_diag_sum, right_diag_sum;
	int *tmp_ptr;

	/* index of starting positions */
	right_diag_index = size - 1;
	max_row_index = size - 1; /* max rows index */
	row_index = 0;
	/* sum to be totalled */
	left_diag_sum = 0;
	right_diag_sum = 0;

	while (row_index <= max_row_index)
	{
		/* move pointer to start of current row */
		tmp_ptr = arr_ptr + (row_index * size);
		/* get the required sum from columns */
		left_diag_sum = left_diag_sum + tmp_ptr[row_index];
		right_diag_sum = right_diag_sum + tmp_ptr[right_diag_index - row_index];
		/* increment row index */
		row_index++;
	}

	printf("%d, %d\n", left_diag_sum, right_diag_sum);
}
