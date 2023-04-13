#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

		int arrayb[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t sizeb = sizeof(arrayb) / sizeof(arrayb[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));


		printf("Found %d at index: %d\n\n", 2, binary_search(arrayb, sizeb, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(arrayb, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(arrayb, sizeb, 999));
    return (EXIT_SUCCESS);
}
