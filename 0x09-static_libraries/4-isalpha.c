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
char lower, upper;
int isletter = 0;

for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
isletter = 1;
}
}
return (isletter);
}
