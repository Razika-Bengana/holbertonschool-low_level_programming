#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table, or NULL if it fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		hash_table->array[a] = NULL;

	return (hash_table);
}
