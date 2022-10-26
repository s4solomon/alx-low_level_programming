#include "lists.h"

/**
 * function: free_listint - frees list_t list
 *
 * @head: linked list to free
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
