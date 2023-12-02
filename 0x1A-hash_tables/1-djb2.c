#include "hash_tables.h"

/**
 * hash_djb2 - incorporation of the djb2 algorithym
 * @str: the string that is use to generate hash value
 *
 * Return: the hash value for the function
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int e;

	hash = 5381;
	while ((e = *str++))
	{
		hash = ((hash << 5) + hash) + e; /* hash * 33 + e */
	}
	return (hash);
}
