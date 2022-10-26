#include "lists.h"

/**
 * function: listint_len - returns number of elements in a list
 *
 * @h: linked list to count
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
