#include <stdlib.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a new node at a given position in a
doubly linked list
  * @h: Pointer to the head of the list
  * @idx: Index where the new node should be added
  * @n: Value to set in the new node
  * Return: Address of the new node, or NULL if it failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (!h)
		return (NULL);

    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
	    return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    dlistint_t *current = *h;
    unsigned int i;

    for (i = 0; i < idx - 1 && current; i++)
        current = current->next;

    if (i < idx - 1 || !current)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = current->next;
    new_node->prev = current;
    if (current->next)
        current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}
