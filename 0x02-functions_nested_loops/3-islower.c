#include "main.h"
#include <ctype.h>
/**
 * _islower - function returns 1 if lowercase
 * @c: An input character
 * Description: function simply returns value
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}
