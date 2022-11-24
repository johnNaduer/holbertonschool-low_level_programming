#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t linked list
 * @head: input dlistint_t
 * Return: cant
 */
int sum_dlistint(dlistint_t *head)
{
	size_t cant = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		cant += head->n;
		head = head->next;
	}

	return (cant);
}
