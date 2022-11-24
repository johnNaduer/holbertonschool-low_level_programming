#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: input dlistint_t
 * @n: input const int
 * Return: a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tem_node = NULL, *nuevo_node = NULL;

	if (head == NULL)
	return (NULL);

	nuevo_node = malloc(sizeof(dlistint_t));
	if (nuevo_node == NULL)
		return (NULL);
	nuevo_node->n = n;
	nuevo_node->prev = NULL;

	tem_node = *head;
	*head = nuevo_node;
	nuevo_node->next = tem_node;

	if (tem_node != NULL)
		tem_node->prev = *head;

	return (nuevo_node);
}
