#include "main.h"

/**
  * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
	* @width: int width of arr
	* @height: int height of arr
	* Return: ptr to the ptr of array or NULL
	*/
int **alloc_grid(int width, int height)
{
	int height_size, width_size, **arr, index_h, index_w, *arr_w;

	/* base check */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* get sizes */
	width_size = sizeof(int) * width;
	height_size = width_size * height;
	/* allocate height, +1 for null byte */
	arr = (int **) malloc(height_size + 1);
	/* verify */
	if (arr == NULL)
		return (NULL);
	/* make 2d arr */
	for (index_h = 0; index_h <= height; index_h++)
	{
		if (index_h == height)
		{
			/* last byte */
			arr[index_h] = '\0';
			break;
		}

		/* allocate mem for width array */
		arr_w = malloc(width_size);
		/* verify */
		if (arr_w == NULL)
			return (NULL);
		for (index_w = 0; index_w < width; index_w++)
		{
			arr_w[index_w] = 0;
		}
		/* assign width arr ptr to height */
		arr[index_h] = arr_w;
	}

	return (arr);
}
