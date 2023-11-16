#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	while (head != NULL)
	 {
		 printf("[%p] %d\n", (void *)current, current->n);
		 count++;
		 current = current->next;
		 if (count > 1024)
		 {
			 exit(98);
		 }
	 }
	 return (count);
}
