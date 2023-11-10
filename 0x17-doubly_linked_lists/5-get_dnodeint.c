#include "lists.h"

/**
 * get_dnodeint_at_index - from the linked list it returns the
 * nth item
 * @head: The head of the list pointer
 * @index: Starting from 0, index of the node to look for
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *pent;

	size = 0;
	if (head == NULL)
	return (NULL);

	pent = head;
	while (pent)
	{
	if (index == size)
	return (pent);
	size++;
	pent = pent->next;
	}
	return (NULL);
}
