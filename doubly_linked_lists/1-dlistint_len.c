#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list
 * @h: input const
 *
 * Return: cant
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	size_t cant = 0;

	while (p != NULL)
	{
		p = p->next;
		cant++;
	}
	return (cant);
}
