#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	while (*key)
	{
		index += *key;
		key++;
	}
	return index %size;
}
