#include "lists.h"

void free_series(listint_t *head);

/**
 * free_listint_safe - check code
 * @h: An input pointer
 * Return: value
 */

size_t free_listint_safe(listint_t **h)
{
size_t x = 0;
listint_t *pH;

pH = *h;
while (pH)
{
pH = *h;
pH = pH->next;
free_series(pH);
x++;
}
*h = NULL;

return (x);
}


/**
 * free_series - check the code
 * @head: A pointer
 * Return: Nothing
 */
void free_series(listint_t *head)
{
listint_t *pH;

if (head)
{
pH = head;
pH = pH->next;
free(pH);
free_series(pH);
}
free(head);
}
