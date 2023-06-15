#include "lists.h"

/**
 * free_dlistint - check the code
 *
 * @head: head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr;

while (head != NULL)
{
ptr = head->next;
free(head);
head = ptr;
}
}
