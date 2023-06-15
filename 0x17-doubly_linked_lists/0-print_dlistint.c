#include "lists.h"
#include <unistd.h>

/**
 * print_dlistint - check the code
 *
 * @h: head of list to print
 *
 * Return: len
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *ptr = h;
size_t len = 0;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
len++;
}
return (len);
}
