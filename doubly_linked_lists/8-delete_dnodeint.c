#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes a node at an index
  * @head: double pointer to the head of the list
  * @index: index of the node to delete
  * Return: value of the node deleted
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tm_del, *tm_head;

	if (!head || !*head)
		return (-1);
	tm_head = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tm_head);
		return (1);
	}
	for ( ; index > 1 && tm_head && tm_head->next; index--)
		tm_head = tm_head->next;
	if (!tm_head->next)
		return (-1);
	tm_del = tm_head->next;
	tm_head->next = tm_del->next ? tm_del->next : NULL;
	if (tm_del->next)
		tm_del->next->prev = tm_head;
	free(tm_del);
	return (1);
}
