#include <stdlib.h>
#include "lists.h"

/**
  * free_dlistint - frees the memory allocated for a doubly linked list
  * @head: pointer to the head of the list.
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
