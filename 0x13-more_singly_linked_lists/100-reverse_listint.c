#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: pointer to the first node in the linked list
 * Return: pointer to the first node in the new linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_list = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev_list;
		prev_list = *head;
		*head = next;
	}

	*head = prev_list;

	return (*head);
}
