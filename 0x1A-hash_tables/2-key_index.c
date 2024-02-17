#include "hash_tables.h"
/**
 * int key_index - a function that gives you the index of a key.
 * @key: is the key
 * @size: is the size
 *
 * Return : the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;
	return (index);
}
