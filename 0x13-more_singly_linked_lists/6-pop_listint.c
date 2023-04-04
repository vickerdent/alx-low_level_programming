#include "lists.h"

/**
 * pop_listint - check code
 * @head: An input pointer
 * Return: value
 */

int pop_listint(listint_t **head)
{
listint_t *a_node;
int n;

if (*head == NULL)
return (0);

n = (*head)->n;
a_node = (*head)->next;
free(*head);
*head = a_node;
return (n);
}
