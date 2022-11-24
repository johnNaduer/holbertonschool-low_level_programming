#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list
 * @head: input dlistint_t
 * @index: input unsigned int
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t cant = 0;

	while (head != NULL)
	{
		if (cant == index)
			break;
		cant++;
		head = head->next;
	}

	return (head);
}
