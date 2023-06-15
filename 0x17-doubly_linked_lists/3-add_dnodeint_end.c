#include "lists.h"

/**
 * add_dnodeint_end - check the code
 *
 * @head: head of list
 * @n: value of node
 *
 * Return: node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ptr, *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
ptr = *head;
if (ptr != NULL)
while (ptr->next != NULL)
ptr = ptr->next;
new->n = n;
new->next = NULL;
new->prev = ptr;
if (ptr != NULL)
ptr->next = new;
else
*head = new;
return (new);
}
