#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key to look for
 * Return: associated value, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idxn = 0;
	hash_node_t *tem = NULL;

	if (key == NULL)
		return (NULL);

	if (ht != NULL)
	{
		idxn = key_index((const unsigned char *)key, ht->size);
		tem = ht->array[idxn];
		/* Look for key and return value if found */
		while (tem != NULL)
		{
			if (strcmp(tem->key, key) == 0)
				return (tem->value);
			tem = tem->next;
		}
	}
	return (NULL);
}
