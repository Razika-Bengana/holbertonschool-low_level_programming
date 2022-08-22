#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL, *tmp = NULL;
	unsigned long int a;

	if (!ht)
		return;

	for (a = 0; a < ht->size; a++)
	{
		for (head = ht->array[a]; head;)
		{
			free(head->value);
			free(head->key);
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
