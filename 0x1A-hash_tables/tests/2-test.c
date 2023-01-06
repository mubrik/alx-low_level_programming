#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	u_int64_t num;

	num = key_index((const unsigned char *) "mubarak", 2048);
	printf("This should be equal %ld == %ld\n", key_index((const unsigned char *)"mubarak", 2048), num);
	num = key_index((const unsigned char *) "Best Shool!", 2);
	printf("This should be equal %ld == %ld\n", key_index((const unsigned char *) "Best Shool!", 2), num);
	num = key_index((const unsigned char *) "ALXXXXXXXXXXX", 2);
	printf("This should be equal and <= 2 %ld == %ld\n", key_index((const unsigned char *) "ALXXXXXXXXXXX", 2), num);
	exit(EXIT_SUCCESS);
}
