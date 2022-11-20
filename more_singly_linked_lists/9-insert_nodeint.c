#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: input listint_t
 * @idx: input unsigned int
 * @n: data
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 0;

	listint_t *nuevo;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		if (cont == idx - 1)
		{
			nuevo = malloc(sizeof(listint_t));
			if (nuevo == NULL)
			{
				return (NULL);
			}
			else
			{
				nuevo->n = n;
				nuevo->next = temp->next;
				temp->next = nuevo;
				return (nuevo);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		cont++;
	}
	return (NULL);
}
