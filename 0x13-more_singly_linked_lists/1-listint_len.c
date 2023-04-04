#include "lists.h"
#include <stdio.h>

/**
 * listint_len - check code
 * @h: A list_h input pointer
 * Return: value
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
