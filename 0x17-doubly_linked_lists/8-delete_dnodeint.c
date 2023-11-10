#include "lists.h"

/**
 * delete_dnodeint_at_index - removes the node at index of
 * the linked list of the function
 *
 * @head: list head of the function
 * @index: new node index of the function
 * Return: 1 if it is succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1;
	dlistint_t *p2;
	unsigned int k;

	p1 = *head;

	if (p1 != NULL)
		while (p1->prev != NULL)
			p1 = p1->prev;

	k = 0;

	while (p1 != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = p1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				p2->next = p1->next;

				if (p1->next != NULL)
					p1->next->prev = p2;
			}

			free(p1);
			return (1);
		}
		p2 = p1;
		p1 = p1->next;
		k++;
	}

	return (-1);
}
