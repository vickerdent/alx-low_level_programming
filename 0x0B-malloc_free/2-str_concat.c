#include "main.h"

/**
 * *str_concat - check the code
 * @s1: char input
 * @s2: another char input
 * Return: Always a pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
char *new_str, *starts1, *starts2;
int i = 0, lens1 = 0, lens2 = 0;

starts1 = s1;
starts2 = s2;
if (s1 == NULL)
s1 = "";
while (*s1)
{
lens1++;
s1++;
}
s1 = starts1;
if (s2 == NULL)
s2 = "";
while (*s2)
{
lens2++;
s2++;
}
s2 = starts2;
new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
starts1 = new_str;
if (new_str == NULL)
return (NULL);
for (; i < (lens1 + lens2); i++)
{
if (i < lens1)
{
new_str[i] = *s1;
s1++;
}
else
{
new_str[i] = *s2;
s2++;
}
}
new_str[i] = '\0';
return (starts1);
}
