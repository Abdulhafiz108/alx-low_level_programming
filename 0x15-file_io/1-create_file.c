#include "main.h"

/**
 * create_file - Creates a file with the given content.
 * @filename: The name of the file to create.
 * @text_content: A null-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written;
	int len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC,
			S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	written = write(fd, text_content, len);

	if (written == -1)
		return (-1);

	close(fd);

	return (1);
}
