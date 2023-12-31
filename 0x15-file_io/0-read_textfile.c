#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: pointer to the file to read and print
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nread, nwrite;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

nread = read(fd, buffer, letters);
close(fd);

if (nread == -1)
{
free(buffer);
return (0);
}

nwrite = write(STDOUT_FILENO, buffer, nread);
free(buffer);

if (nwrite == -1 || nread != nwrite)
return (0);

return (nwrite);
}
