#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the linked list
 * @h: linked list of type listint_t to print
 * Return: The number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
