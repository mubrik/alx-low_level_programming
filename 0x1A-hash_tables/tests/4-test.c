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
	char *value;
	hash_table_t *ht;
	u_int64_t size = 1024;

	printf("---- testing getting from hash table ----\n");
	ht = hash_table_create(size);
	printf("---- setting key: betty, value: cool ----\n");
	hash_table_set(ht, "betty", "cool");
	value = hash_table_get(ht, "betty");
	printf("Node betty value(cool): %s \n", value);
	printf("---- setting key: hetairas, value: school ----\n");
	hash_table_set(ht, "hetairas", "school");
	value = hash_table_get(ht, "hetairas");
	printf("Node hetairas value(school): %s \n", value);
	printf("---- setting key: mentioner, collides with heiraras, value: ALX ----\n");
	hash_table_set(ht, "mentioner", "ALX");
	value = hash_table_get(ht, "mentioner");
	printf("Node mentioner value(ALX): %s \n", value);
	printf("---- setting key: stylist, value: hello ----\n");
	hash_table_set(ht, "stylist", "hello");
	value = hash_table_get(ht, "stylist");
	printf("Node stylist value(hello): %s \n", value);
	printf("---- setting key: subgenera, collides with stylist, value: hi ----\n");
	hash_table_set(ht, "subgenera", "hi");
	value = hash_table_get(ht, "subgenera");
	printf("Node subgenera value(hi): %s \n", value);
	printf("---- getting NULL ----\n");
	value = hash_table_get(ht, NULL);
	printf("Node NULL value(nil): %s \n", value);
	printf("---- NULL hash table ----\n");
	value = hash_table_get(NULL, "subgenera");
	printf("Node NULL value(nil): %s \n", value);
	return (EXIT_SUCCESS);
}
