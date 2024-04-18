#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - A Function that a hash table
 * @size: variable size of for the hash table
 * return: (0)sucessfull
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t* table = (hash_table_t*)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return NULL;
	}
	table->array = (hash_node_t**)malloc(size * sizeof (hash_node_t *));
	if (table->array== NULL)
	{
		free(table);
		return NULL;
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->size = size;
	return table;
}
