#include "lists.h"

/**
 * free_list - check code
 * @head: A list_t input pointer
 * Return: nothing
 */

void free_list(list_t *head)
{
list_t *temp;

temp = head;
while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
free(head);
}
