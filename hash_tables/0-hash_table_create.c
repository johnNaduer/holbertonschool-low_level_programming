#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int n = 0;
	hash_table_t *nueva_tabla = NULL;

	nueva_tabla = malloc(sizeof(hash_table_t));
	if (nueva_tabla == NULL)
		return (NULL);
	nueva_tabla->array = malloc(sizeof(hash_node_t *) * size);
	if (nueva_tabla->array == NULL)
	{
		free(nueva_tabla);
		nueva_tabla = NULL;
		return (NULL);
	}
	while (n < size)
	{
		nueva_tabla->array[n] = NULL;
		n++;
	}
	nueva_tabla->size = size;
	return (nueva_tabla);
}
