#include "lists.h"

/**
 * *insert_nodeint_at_index - check code
 * @head: An input pointer
 * @idx: An input
 * @n: Another input
 * Return: value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 1;
listint_t *d_node, *x;

if (head == NULL)
return (NULL);

d_node = malloc(sizeof(listint_t));
if (d_node == NULL)
return (NULL);

if (*head == NULL)
{
*head = d_node;
d_node->next = NULL;
d_node->n = n;
return (d_node);
}

if (idx == 0)
{
d_node->next = *head;
d_node->n = n;
*head = d_node;
return (d_node);
}

x = *head;
while (i < idx)
{
x = x->next;
i++;
}

d_node->n = n;
d_node->next = x->next;
x->next = d_node;
return (d_node);
}
