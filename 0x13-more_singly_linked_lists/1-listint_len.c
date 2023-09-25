#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		count_node++;
		h = h->next;
	}

	return (count_node);
}
