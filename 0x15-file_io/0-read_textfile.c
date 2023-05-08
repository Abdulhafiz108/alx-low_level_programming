#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * letters: number of letters to be read
 * Return: bytes_written- actual number of bytes read and printed
 * 	0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read, bytes_written;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	bytes_read = read(fd, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1)
	{
		return (0);
	}

	free(buf);
	close(fd);

	return (bytes_written);
}
