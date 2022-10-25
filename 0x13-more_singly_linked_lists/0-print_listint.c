#include "lists.h"

/**
 * function: print_listint - print all the elements of a list
 *
 * @h: linked list to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	listint_t const *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
