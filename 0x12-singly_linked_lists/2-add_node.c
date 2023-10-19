#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
	{
		return (NULL);
	}
	
	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str =  malloc(strlen(str) + 1);
	if(newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	strcpy(newnode->str, str);
	newnode->len = strlen(str);
	if (*head != NULL)
	{
		*head = newnode;
	}
	else 
	{
		*head->next = newnode;
	}
	return (newnode);
}
}
