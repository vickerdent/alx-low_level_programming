#include "lists.h"

/**
 * sum_listint - check code
 * @head: An input pointer
 * Return: value
 */

int sum_listint(listint_t *head)
{
int total;

if (head == NULL)
return (0);

for (total = 0; head != NULL; head = head->next)
total += head->n;

return (total);
}
