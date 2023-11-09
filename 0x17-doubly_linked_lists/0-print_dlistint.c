#include "lists.h"

/**
 * print_dlistint - It prints all the elements of the list
 *
 * @h: the list head for the function
 * Return: the number of nodes in the function
 */
size_t print_dlistint(const dlistint_t *h)
{
	int numb;

	numb = 0;

	if (h == NULL)
		return (numb);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
