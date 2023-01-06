#include "hash_tables.h"

/**
 * hash_table_delete - prints hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	u_int64_t i = 0;
	hash_node_t *node = NULL, *next = NULL;

	if (!ht)
		return;
		/* iterate over row */
	for (; i < ht->size; i++)
	{
		/* iterate over column */
		node = ht->array[i];
		while (node)
		{
			next = node->next, free(node->value), free(node->key), free(node);
			node = next;
		}
	}
	/* free array and ht*/
	free(ht->array), free(ht);
}
