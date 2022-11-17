#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums a listint list
 *
 * @head: head of list
 *
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int add;

	if (head == NULL)
		return (0);

	for (add = 0; head != NULL; head = head->next)
		add += head->n;

	return (add);
}
