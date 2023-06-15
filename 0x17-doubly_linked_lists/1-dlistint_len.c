#include "lists.h"

/**
 * dlistint_len - check the code
 *
 * @h: head of list
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr = h;
size_t len = 0;

while (ptr != NULL)
{
ptr = ptr->next;
len++;
}
return (len);
}
