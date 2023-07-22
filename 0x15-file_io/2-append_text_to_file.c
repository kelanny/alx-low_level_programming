#include "main.h"

/**
 * append_text_to_file - Appends a given text at the en of a file.
 * @filename: Name of the file to append to
 * @text_content: Text to append to the file
 *
 * Return: (1) if successful, otherwise return (-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;
	ssize_t written_bytes;

	if (text_content == NULL)
	{
		if (filename == NULL)
			return (-1);
		return (1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	written_bytes = write(file, text_content, len);
	if (written_bytes == -1)
		return (-1);
	return (1);
}
