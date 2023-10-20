#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - A function that add a node to the end
 * of a list
 * @head: head of the list
 * @str:newnode str name
 * Return: (0)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = malloc(strlen(str) + 1);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	strcpy(newnode->str, str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
