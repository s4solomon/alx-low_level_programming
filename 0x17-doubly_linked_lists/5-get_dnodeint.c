#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a doubly linked list.
  * @head: Pointer to the head of the list.
  * @index: Index of the node to retrieve (starting from 0)
  * Return: Pointer to the nth node, or NULL if the node does not exist.
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; current && i < index; i++)
		current = current->next;

	return ((i == index) ? current : NULL);
}
