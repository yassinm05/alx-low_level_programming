#include "hash_tables.h"

/**
 * hash_table_create - creates a hashtable
 *
 * @size: size of the array
 *
 * Return: a hashtable and NULL when smth is wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int count;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (count = 0; count < size; count++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
