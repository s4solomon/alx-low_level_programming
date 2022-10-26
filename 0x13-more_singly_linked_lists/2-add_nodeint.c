#include "lists.h"

/**
 * function: add_nodeint - add a new node at the beginning of list
 *
 * @head: linked list to add into
 * @n: new element to add
 *
 * Return: address of new element or null if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
