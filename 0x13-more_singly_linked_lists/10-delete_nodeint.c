#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - A program that deletes a particular node at a
 * at a particlar position
 * @head: head is the variable for the head node
 * @index: is the variable that holds the paticular position for deletion
 * Return: (0)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int n;

	if (temp != NULL)
	{
		while (temp != NULL)
		{
			if (n == index)
			{
				free(temp);
			}
			n++;
			temp = temp->next;
		}
		return (1);
	}
	return (-1);
}
