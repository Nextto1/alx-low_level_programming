#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int ano;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ano = *h - (*h)->next;
		if (ano > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}
