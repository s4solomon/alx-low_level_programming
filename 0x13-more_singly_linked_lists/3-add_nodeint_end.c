#include "lists.h"

/**
 * function: add_nodeint_end - add a new node at the end of list
 *
 * @head: linked list to add into
 * @n: new element to add
 *
 * Return: address of new element or null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	
	ptr->next = new;

	return (new);
}
