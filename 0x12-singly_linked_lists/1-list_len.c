#include "lists.h"

/**
 * list_len - check code
 * @h: A list_t input pointer
 * Return: value
 */

size_t list_len(const list_t *h)
{
unsigned int nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
