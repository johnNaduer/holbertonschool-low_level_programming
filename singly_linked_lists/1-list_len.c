#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: input list_t
 * Return: return cant
 */
size_t list_len(const list_t *h)
{
	size_t cant = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		cant++;
		h = h->next;
	}
	return (cant);
}
