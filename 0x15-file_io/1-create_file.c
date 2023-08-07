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
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	while (text_content[txt_len] != '\0')
	{
		txt_len++;
	}

	bytes = write(fd, text_content, txt_len);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (bytes);
}
