#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - add a new node at the end of a dlistint_t
  * @head: The double linked list 2 add to.
  * @n: new node to add
  * Return: The address of the new element or NULL if failed.
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;



	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next)
		last = last->next;

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
