#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - A program that free nodes from list node up
 * to the head node to be set ass null
 * @head: represent the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
