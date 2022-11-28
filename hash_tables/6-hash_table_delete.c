#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *tem = NULL, *next_tem = NULL;

	if (ht == NULL)
		return;

	while (n < ht->size)
	{
		next_tem = ht->array[n];
		while (tem)
		{
			tem = next_tem;
			next_tem = next_tem->next;
			if (tem->key != NULL)
				free(tem->key);
			if (tem->value != NULL)
				free(tem->value);
			free(tem);
		}
		free(ht->array[n]);
		n++;
	}
	free(ht->array);
	free(ht);
}
