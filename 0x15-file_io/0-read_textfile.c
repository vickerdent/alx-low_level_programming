#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - check the code
 * @filename: An input
 * @letters: Another input
 * Return: number of printable letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int new_file;
int l_size, to_write;
char *zod;

if (filename == NULL || letters == 0)
return (0);
zod = malloc(sizeof(char) * (letters));
if (zod == NULL)
return (0);

new_file = open(filename, O_RDONLY);
if (new_file == -1)
{
free(zod);
return (0);
}
l_size = read(new_file, zod, letters);
if (l_size == -1)
{
free(zod);
close(new_file);
return (0);
}

to_write = write(STDOUT_FILENO, zod, l_size);

free(zod);
close(new_file);
if (to_write != l_size)
return (0);
return (l_size);
}
