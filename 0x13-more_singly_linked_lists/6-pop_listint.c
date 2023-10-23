#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - A proram that deletes the head of
 * a structure
 * @head: represent the head node
 * Return: (0)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int popped_value;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	popped_value = temp->n;
	*head = (*head)->next;
	free(temp);
	return (popped_value);
}
