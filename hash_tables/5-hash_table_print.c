#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: a dictionary format of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *tem = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (n < ht->size)
	{
		tem = ht->array[n];
		while (tem)
		{
			printf("'%s' : '%s'", tem->key, tem->value);
			if (ht->array[n + 1] == NULL)
				break;
			printf(", ");
			tem = tem->next;
		}
		n++;
	}
	printf("}\n");
}
