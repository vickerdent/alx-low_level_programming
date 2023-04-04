#include "lists.h"

/**
 * free_listint2 - check code
 * @head: An input pointer
 * Return: value
 */

void free_listint2(listint_t **head)
{
listint_t *i;

if (head == NULL)
return;

i = *head;
while (*head)
{
i = *head;
(*head) = (*head)->next;
free(i);
}
*head = NULL;
}
