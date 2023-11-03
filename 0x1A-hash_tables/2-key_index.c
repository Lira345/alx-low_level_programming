#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key
 * @key:  key to find it's index
 * @size: the size of the array of the hash table
 * Return: index in which key/value pair exists in the array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
