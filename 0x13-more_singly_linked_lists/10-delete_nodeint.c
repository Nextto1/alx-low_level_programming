#include "lists.h"

/**
 * delete_nodeint_at_index - at a certain index,
 * deletes a node in a linked list
 * @head: pointer to the first element in the linked list
 * @index: index of the node to delete from the list
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *recent = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(recent);
		return (1);
	}

	while (i < index - 1)
	{
		if (!recent || !(recent->next))
			return (-1);
		recent = recent->next;
		i++;
	}


	current = recent->next;
	recent->next = current->next;
	free(current);

	return (1);
}
