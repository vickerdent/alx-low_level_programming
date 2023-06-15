#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 *
 * @head: head of list
 * @index: index of node
 *
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *ptr = head;

while (ptr != NULL && index--)
ptr = ptr->next;
return (ptr);
}
