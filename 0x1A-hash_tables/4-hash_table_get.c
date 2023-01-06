#include "hash_tables.h"


/**
 * hash_table_get - gets the value of a key from ht
 * @ht: the hash table
 * @key: Non empty string
 * Return: the value at key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	u_int64_t index;
	hash_node_t *node = NULL;

	if (!ht || !ht->array || !key)
		return (NULL);
	/* get index */
	index = key_index((const unsigned char *) key, ht->size);
	/* get node */
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	/* get exact key */
	while (node)
	{
		if (_strcmp(key, node->key) == 0)
			break;
		node = node->next;
	}

	return (node->value);
}
