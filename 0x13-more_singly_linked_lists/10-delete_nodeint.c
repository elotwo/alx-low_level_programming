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
	listint_t *prev = NULL;
	unsigned int n = 0;

	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && n != index)
	{
		prev = temp;
		temp = temp->next;
		n++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
