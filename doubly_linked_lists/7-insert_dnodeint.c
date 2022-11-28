#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new
 * node at a given position
 * @h: head of node
 * @idx: index to insert node
 * @n: data for new node
 * Return: list with inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cant = 1;
	dlistint_t *tem = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	tem = *h;
	if (idx == 0)
	{
		*h = new;
		new->next = tem;
		new->prev = NULL;
		tem->prev = new;
		return (new);
	}
	while (tem->next != NULL)
	{
		if (cant == idx) /* found back */
		{
			new->prev = tem; /* current prev to back link */
			new->next = tem->next; /* current next to front link*/
			tem->next = new; /* back next link */
			new->next->prev = new; /* from prev link */
		}
		tem = tem->next;
		cant++;
	}
	if (cant == idx) /* end of DLL */
	{
		new->prev = tem; /* current prev to back link */
		new->next = NULL; /* current next to NULL*/
		tem->next = new; /* back next link */
	}
	if (cant < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
