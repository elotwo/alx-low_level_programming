#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - A linked list function
 * @h: variable h
 * Return: (0)
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
