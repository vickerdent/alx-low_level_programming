#include "lists.h"
#include <string.h>

/**
 * *add_node - check code
 * @head: A list_t input pointer
 * @str: A char input pointer
 * Return: value
 */

ist_t *add_node(list_t **head, const char *str)
{
list_t *temp;
int length = 0;

temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);

while (str[length])
length++;

temp->len = length;
temp->str = strdup(str);
temp->next = *head;
*head = temp;
return (temp);
}
