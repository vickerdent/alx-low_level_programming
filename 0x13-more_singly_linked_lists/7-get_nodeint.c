#include "lists.h"

/**
 * *get_nodeint_at_index - check code
 * @head: An input pointer
 * @index: An input
 * Return: value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int pH = 0;

if (head == NULL)
return (NULL);

while (head)
{
if (pH == index)
return (head);
head = head->next;
pH++;
}
return (NULL);
}
