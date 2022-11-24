#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: input dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tem_node = NULL;

	while (head != NULL)
	{
		tem_node = head->next;
		free(head);
		head = tem_node;
	}
}
