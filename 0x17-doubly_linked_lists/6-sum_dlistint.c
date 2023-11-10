#include "lists.h"

/**
 * sum_dlistint - from the sum of all the data it returns
 * of the linked list
 *
 * @head: the list head from the function
 * Return: the function sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int add;

	add = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			add += head->n;
			head = head->next;
		}
	}

	return (add);
}
