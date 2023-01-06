#include "hash_tables.h"

/**
 * hash_table_create - hashtable creator
 * @size: size of table
 * Return: pointer to hash struct
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb = NULL;
	hash_node_t **node = NULL;

	if (!size)
		return (NULL);
	/* malloc hash table struct*/
	tb = malloc(sizeof(hash_table_t));
	if (!tb)
		return (NULL);
	/* hash table array, node */
	node = calloc(size, sizeof(hash_node_t *));
	if (!node)
		return (NULL);
	/* attribs */
	tb->size = size, tb->array = node;
	return (tb);
}
