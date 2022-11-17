#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: input list_t
 * @str: input const char
 * Return: new
 */
list_t *add_node(list_t **head, const char *str)
{
	int n, cant = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		cant++;

	new->len = n;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
