#include "lists.h"

/**
 * pop_listint - check code
 * @head: An input pointer
 * Return: value
 */

int pop_listint(listint_t **head)
{
int i;
listint_t *x;

if (head == NULL || *head == NULL)
return (0);

i = (*head)->i;
x = (*head)->x;
free(*head);
*head = x;
return (i);
}
