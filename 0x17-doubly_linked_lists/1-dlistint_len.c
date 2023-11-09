#include "lists.h"

/**
 * dlistint_len - That's the number of elements in
 * the list
 *
 * @h: head of the list in the function
 * Return: the number of nodes in the fuction
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numb;

	numb = 0;

	if (h == NULL)
		return (numb);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
