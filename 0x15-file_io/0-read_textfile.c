#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
* read_textfile - Function reads a file_text file and
* prints it to the POSIX standard output
* @filename: The file
* @letters: Number of letters
* Description: Function opens a file, reads up to `letters` characters
* from it, and writes those characters to the standard output. It ensures
* that the resources are freed and files are closed in case of any errors.
* Return: Returns the actual number of letters it could read and print, or 0 if
* an operation fails.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t nread, nwritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	close(fd);
	free(buffer);

	if (nwritten != nread)
		return (0);

	return (nread);
}
