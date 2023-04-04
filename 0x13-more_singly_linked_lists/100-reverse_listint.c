#include "lists.h"

/**
 * *reverse_listint - check code
 * @head: An input pointer
 * Return: value
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *a_first = NULL, *next;

if (*head == NULL)
return (NULL);

while (*head)
{
next = (*head)->next;
(*head)->next = a_first;
a_first = *head;
*head = next;
}
*head = a_first;
return (*head);
}
