#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
	* @arr: an array of integers
	* @no_of_elem: no of elem in array
	* Return: void
	*/
void reverse_array(int *arr, int no_of_elem)
{
	int arr_len_mid, arr_end_index, iter, temp_elem;
	/* get mid of array */
	arr_len_mid = no_of_elem / 2;
	iter = 0;
	arr_end_index = no_of_elem - 1;

	/* iterate to mid way */
	while (iter < arr_len_mid)
	{
		/* store val a tem */
		temp_elem = arr[iter];
		/* push arr pointer by index vals */
		*(arr + iter) = *(arr + arr_end_index);
		*(arr + arr_end_index) = temp_elem;
		/* increment/decrement */
		iter++;
		arr_end_index--;
	}
}
