#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t retrieve = ht->array[index];
	while (retrieve != NULL)
	{
		if (strcmp(retrieve->key, key) == 0)
		{
			return retrieve->value;
		}
		retrieve = retrieve->next;
	}
	return NULL;
}
