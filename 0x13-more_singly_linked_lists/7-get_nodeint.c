#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index -  A program that return a particlar node
 * @head: head node
 * @index: nth node
 * Return: (0)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	while (temp != NULL)
	{
		if (n == index)
		{
			return (temp);
		}
		n++;
		temp = temp->next;
	}
	return (NULL);
}


