#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * create_file - check the code
 * @filename: An input
 * @text_content: Another input
 * Return: 1 if successful or -1 if not or null
 */

int create_file(const char *filename, char *text_content)
{
char *zod;
int l_size = 0, inside_size = 0;
int new_file;

if (filename == NULL)
return (-1);

new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

if (new_file == -1)
return (-1);

if (text_content != NULL)
{
for (inside_size = 0, zod = text_content; *zod; zod++)
inside_size++;
l_size = write(new_file, text_content, inside_size);
}

if (close(new_file) == -1 || inside_size != l_size)
return (-1);
return (1);
}
