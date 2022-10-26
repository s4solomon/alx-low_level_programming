#include "lists.h"

/**
 * function: free_listint2 - frees list_t list
 *
 * @head: pointer linked list to free
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
