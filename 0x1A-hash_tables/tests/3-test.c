#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	u_int64_t index, size = 1024;
	printf("----testing adding to hash table ----\n");
	ht = hash_table_create(size);
	index = key_index((const unsigned char *)"betty", size);
	hash_table_set(ht, "betty", "cool");
	printf("this should print a valid pointer index %p \n", (void *)ht->array[index]);
	printf("this should print betty: %s \n", ht->array[index]->key);
	printf("this should print cool: %s \n", ht->array[index]->value);
	printf("this should print a nil pointe index %p \n", (void *)ht->array[index - 1]);
	printf("----testing collides ----\n");
	hash_table_set(ht, "hetairas", "cool");
	index = key_index((const unsigned char *)"hetairas", size);
	printf("this should print hetairas: %s \n", ht->array[index]->key);
	hash_table_set(ht, "mentioner", "cool");
	printf("this should print mentioner: %s \n", ht->array[index]->key);
	printf("this should print hetairas: %s \n", ht->array[index]->next->key);
	printf("this should print nil: %p \n", (void *)ht->array[index]->next->next);
	printf("----testing ovewrite ----\n");
	printf("this should print cool: %s \n", ht->array[index]->value);
	hash_table_set(ht, "mentioner", "very cool");
	printf("this should print very cool: %s \n", ht->array[index]->value);
	return (EXIT_SUCCESS);
}
