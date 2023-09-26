#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the linked list
 * @h: linked list of type listint_t to print
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
