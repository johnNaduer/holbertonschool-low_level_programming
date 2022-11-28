#include "hash_tables.h"
/**
  * hash_table_delete - delete the whole hash table
  * @ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *tm;

	if (ht == NULL)
		return;
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			printf("First for loop\n");
			while (ht->array[n])
			{
				printf("Freeing\n");
				tm = ht->array[n];
				free(tm->key);
				tm->key = NULL;
				free(tm->value);
				tm->value = NULL;
				ht->array[n] = ht->array[n]->next;
				free(tm);
				tm = NULL;
			}
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
	printf("Leaving\n");
}
