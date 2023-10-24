#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - A program that insert newnode at a
 * given poistion
 * @head: variable for the head node
 * @idx: variable for the given position
 * @n: variable number
 * Return: (0)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int i;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = current->next;
		current->next = newnode;
	}
	return (newnode);
}


