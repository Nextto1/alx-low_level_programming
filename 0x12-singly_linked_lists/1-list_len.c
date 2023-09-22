#include <stdlib.h>
#include "lists.h"

/**
 * list_len - it returns the number of elements in the linked list
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t count_down = 0;

	while (h)
	{
		count_down++;
		h = h->next;
	}
	return (count_down);
}
