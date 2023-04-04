#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - check code
 * @h: A list_h input pointer
 * Return: value
 */

size_t print_listint(const listint_t *h)
{
size_t me;
if (h == NULL)
return (0);
for (me = 0; h != NULL; h = h->next, me++)
printf("%d\n", h->n);
return (me);
}
