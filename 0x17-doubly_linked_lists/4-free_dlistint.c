#include "lists.h"

/**
 * free_dlistint - It freezes the list
 * @head: Is the pointer of the head of the function
 * Return:Returns nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
