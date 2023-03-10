#include "main.h"

/**
 * _islower - function returns 1 if lowercase
 * @c: An input character
 * Description: function simply returns value
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
char i;
int lower = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}

return (lower);
}
