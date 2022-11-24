#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new
 * node at the end of a dlistint_t list
 * @head: input dlistint_t
 * @n: input const int
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tem_node, *nuevo_node;

	if (head == NULL)
		return (NULL);

	nuevo_node = malloc(sizeof(dlistint_t));
	if (nuevo_node == NULL)
		return (NULL);
	nuevo_node->n = n;
	nuevo_node->next = NULL;

	tem_node = *head;

	if (*head == NULL)
	{
		*head = nuevo_node;
		nuevo_node->prev = NULL;
		return (nuevo_node);
	}

	while (tem_node->next != NULL)
	{
		tem_node = tem_node->next;
	}

	tem_node->next = nuevo_node;
	nuevo_node->prev = tem_node;

	return (nuevo_node);
}
