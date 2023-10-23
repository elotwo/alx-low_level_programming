#include <stdio.h>
#include "lists.h"
/**
 * print_listint - A function that print all element of a structurw
 * list
 * @h: variable arguiment
 * Return: (0)
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}
