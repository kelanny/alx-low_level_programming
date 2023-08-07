#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to add text
 * @text_content: Text to add to the file.
 *
 * Return: 1 on Success otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
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
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	bytes = write(fd, text_content, txt_len);
	if (bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
