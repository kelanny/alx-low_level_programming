#include "main.h"

/**
 * create_file - Creates a file or truncate and existing one.
 * @filename: A pointer to the finame string.
 * @text_content: A pointer to the content to write to file.
 *
 * Return: 1 on success or -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, txt_len = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[txt_len] != '\0')
			txt_len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(fd, text_content, txt_len);
	if (fd == -1 || bytes == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
