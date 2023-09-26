#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *recent;

	while (head)
	{
		recent = head->next;
		free(head);
		head = recent;
	}
}
