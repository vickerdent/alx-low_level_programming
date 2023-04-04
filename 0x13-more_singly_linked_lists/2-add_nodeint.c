#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint - check code
 * @head: An input pointer
 * @n: An input
 * Return: value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *a_node;

a_node = *head;
*head = malloc(sizeof(listint_t));
if (!*head)
return (NULL);
(*head)->n = n;
(*head)->next = a_node;
return (*head);
}
