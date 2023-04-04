#include "lists.h"

/**
 * *add_nodeint_end - check code
 * @head: An input pointer
 * @n: An input
 * Return: value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *turner, *the_end;

if (head == NULL)
return (NULL);
the_end = *head;
if (the_end != NULL)
while (the_end->next != NULL)
the_end = the_end->next;

turner = malloc(sizeof(listint_t));
if (turner == NULL)
return (NULL);

turner->n = n;
if (*head == NULL)
{
*head = turner;
turner->next = NULL;
}
else
{
the_end->next = turner;
turner->next = NULL;
}
return (turner);
}
