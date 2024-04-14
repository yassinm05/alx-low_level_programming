#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: is the hashtable
 * @key: is the key
 *
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (0);
	if (ht->array == NULL || ht->size == 0 || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
