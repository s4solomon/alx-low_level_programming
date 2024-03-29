#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint - add a new node at the beginning of a dlistint_t
  * @head: The double linked list 2 add to.
  * @n: new node to add
  * Return: The address of the new element or NULL if failed.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
