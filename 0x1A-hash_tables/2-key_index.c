#include "hash_tables.h"

/**
 * key_index - check the code
 * @key: key string
 * @size: size of hash table
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
