#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <stdio.h>

int close_file(int);

/**
 * main - check the code
 * @argc: An input
 * @argv: Another input
 * Return: 1 if successful
 */

int main(int argc, char *argv[])
{
int last_task = -1;
int var_reading = 0;
int trial = 0;
int end_of_file = 1;
char buffer[1024];
int first_task = -1;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

first_task = open(argv[1], O_RDONLY);
if (first_task < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

last_task = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (last_task < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close_file(first_task);
exit(99);
}

while (end_of_file)
{
end_of_file = read(first_task, buffer, 1024);
if (end_of_file < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close_file(first_task);
close_file(last_task);
exit(98);
}
else if (end_of_file == 0)
break;
var_reading += end_of_file;
trial = write(last_task, buffer, end_of_file);
if (trial < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close_file(first_task);
close_file(last_task);
exit(99);
}
}
trial = close_file(last_task);
if (trial < 0)
{
close_file(first_task);
exit(100);
}
trial = close_file(first_task);
if (trial < 0)
exit(100);
return (0);
}

/**
 * close_file - check code
 * @message: An input
 * Return: 1 if successful, -1 if failed
 */
int close_file(int message)
{
int trial;

trial = close(message);
if (trial < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", message);
return (trial);
}
