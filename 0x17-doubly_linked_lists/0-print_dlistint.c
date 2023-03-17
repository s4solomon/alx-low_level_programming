#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list.
  * @h: The double linked list 2 count.
  * Return: List of elements in the doubly linked list.
  */

size_t print_dlistint(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++lenght;
		h = h->next;
	}

	return (lenght);
}
