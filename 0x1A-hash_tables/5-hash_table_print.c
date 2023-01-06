#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	u_int64_t i = 0, set_delim = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	/* opeening bracket */
	printf("{");
	/* iterate over row */
	for (; i < ht->size; i++)
	{
		/* iterate over column */
		node = ht->array[i];
		if (node && set_delim)
			printf(", "), set_delim = 0;
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next)
				printf(", "), set_delim = 0;
			else
				set_delim = 1;
			node = node->next;
		}
	}
	/* close bracket */
	printf("}\n");
}
