#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - A program that calculate the sum int sum
 * of all the data (n) of a listint_t linked list.
 * @head: stand as the variable for the head node
 * Return: (0)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	size_t node_count = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
		node_count++;
	}
	return (sum);
}
