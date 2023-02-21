#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function returns 1 if character is a letter
 * @c: An input character
 * Description: function simply returns value
 * alphabet in lowercase 10 times
 * Return: 1 if is letter or 0 if anything else
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}
