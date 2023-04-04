#include "lists.h"

/**
 * *find_listint_loop - check code
 * @head: An input pointer
 * Return: value
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *first = head, *second = head;

while (first && second && second->next)
{
first = first->next;
second = second->next->next;
if (first == second)
{
return (first);
}
}
return (NULL);
}
