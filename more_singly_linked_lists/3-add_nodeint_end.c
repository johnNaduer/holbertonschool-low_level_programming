#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list
 * @head: input listint_t
 * @n: input const int
 * Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neo;
	listint_t *temp;

	neo = malloc(sizeof(listint_t));
	if (neo == NULL)
		return (NULL);

	neo->n = n;
	neo->next = NULL;

	if (*head == NULL)
	{
		*head = neo;
		return (neo);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = neo;

	return (neo);
}
