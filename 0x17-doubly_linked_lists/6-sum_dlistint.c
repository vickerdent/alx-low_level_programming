#include "lists.h"

/**
 * sum_dlistint - check the code
 *
 * @head: head of list
 *
 * Return: int or 0
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
