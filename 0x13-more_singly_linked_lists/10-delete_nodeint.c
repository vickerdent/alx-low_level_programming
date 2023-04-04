#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - check code
 * @head: An input pointer
 * @index: An input
 * Return: value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *another_pH, *x;
unsigned int place = 1;

if (*head == NULL)
return (-1);

another_pH = *head;
if (index == 0)
{
*head = (*head)->next;
free(another_pH);
}
else
{
while (place < index)
{
another_pH = another_pH->next;
if (another_pH == NULL)
return (-1);
place++;
}
x = another_pH;
x = x->next;
another_pH->next = x->next;
free(x);
}
return (1);
}
