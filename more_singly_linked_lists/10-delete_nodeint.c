#include "lists.h"

/**
* delete_nodeint_at_index - function that deletes the node
* at index index of a l*istint_t linked list
* @head: input listint_t
* @index: input unsigned int
* Return: 1
* fail -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre;
	listint_t *sig;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	sig = *head;
	pre = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(sig);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (sig == NULL)
			return (-1);
		pre = sig;
		sig = sig->next;
	}
	if (pre)
		pre->next = sig->next;
	free(sig);

	return (1);
}
