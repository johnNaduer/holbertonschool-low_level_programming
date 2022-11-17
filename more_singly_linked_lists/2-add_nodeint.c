#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - function that adds a new node at the
  * beginning of a listint_t list
  * @head: input listint_t
  * @n: input const int
  * Return: return *head
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neo;

	neo = *head;
	neo = malloc(sizeof(listint_t));
	if (neo == NULL)
		return (NULL);
	neo->n = n;
	neo->next = *head;
	*head = neo;
	return (*head);
}
