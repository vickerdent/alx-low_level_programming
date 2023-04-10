#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - check the code
 * @filename: An input
 * @text_content: Another input
 * Return: 1 if successful or -1 if not or null
 */

int append_text_to_file(const char *filename, char *text_content)
{
char *zod;
ssize_t l_size = 0;
int new_file;
ssize_t inside_size = 0;

if (filename == NULL)
return (-1);

new_file = open(filename, O_WRONLY | O_APPEND);

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
