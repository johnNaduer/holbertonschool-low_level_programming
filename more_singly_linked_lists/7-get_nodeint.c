#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - g
 *
 * @head: input listint_t
 * @index: input unsigned int
 *
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
	return (head);
}
