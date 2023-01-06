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
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	printf("size should be 1024, size: %ld\n", ht->size);
	ht = hash_table_create(0);
	printf("Test NULL, value:%p\n", (void *)ht);
	ht = hash_table_create(1024);
	printf("Test array is set to 0, 0 index value: %p\n", (void *)ht->array[0]);
	printf("Test array is set to 0, 1023 index value: %p\n", (void *)ht->array[1023]);
	return (EXIT_SUCCESS);
}
