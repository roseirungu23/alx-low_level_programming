#include "hash_tables.h"

/**
 * key_index - Get the index of the key
 * @key: The key to get the index for
 * @size: The size of the hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
