#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slim = head;
	listint_t *fat = head;

	if (!head)
		return (NULL);

	while (slim && fat && fat->next)
	{
		fat = fat->next->next;
		slim = slim->next;
		if (fat == slim)
		{
			slim = head;
			while (slim != fat)
			{
				slim = slim->next;
				fat = fat->next;
			}
			return (fat);
		}
	}

	return (NULL);
}
