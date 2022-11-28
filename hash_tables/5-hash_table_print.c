#include "hash_tables.h"
/**
  * hash_table_print - print the hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n, j;
	hash_node_t *tm;

	n = j = 0;
	if (!ht)
		return;
	putchar('{');
	for (n = j = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			tm = ht->array[n];
			while (tm)
			{
				printf("%s'%s': '%s'", j == 0 ? "" : ", ", tm->key, tm->value), j++;
				tm = tm->next;
			}
		}
	}
	printf("}\n");
}
