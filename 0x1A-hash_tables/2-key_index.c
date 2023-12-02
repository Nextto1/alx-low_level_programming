#include "hash_tables.h"

/**
 * key_index - that's the index of a key
 * @key: the key to get index
 * @size: the hash table size
 *
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
