#include "lists.h"

/**
 * free_listint - check code
 * @head: An input pointer
 * Return: value
 */

void free_listint(listint_t *head)
{
listint_t *i;

while (head)
{
i = head;
head = head->next;
free(i);
}
free(head);
}
