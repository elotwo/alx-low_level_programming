#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;
	*head = prev = current = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (current != NULL)
		{
			*head = prev->next;
			prev = current->next;
			current = *head;
		}
	}
	return (current);
	
}
