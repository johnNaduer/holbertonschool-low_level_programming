#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: input list_t
 * @str: input const char
 * Return: (*head).
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tem;
	size_t cant;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (cant = 0; str[cant]; cant++)
		;

	new->len = cant;
	new->next = NULL;
	tem = *head;

	if (tem == NULL)
	{
		*head = new;
	}
	else
	{
		while (tem->next != NULL)
			tem = tem->next;
		tem->next = new;
	}

	return (*head);
}
