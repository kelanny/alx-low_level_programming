#include "main.h"
#include <fcntl.h>
#include <stdio.h>

/**
 * str_len - Count the length of a string.
 * @str: the string to count.
 *
 * Return: length of a string
 */

int str_len(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - Creates a file
 * @filename: The name of the file to create.
 * @text_content: The content to add to file
 *
 * Return: Success 1 otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes_written;
	int len = str_len(text_content);

	fp = open(filename, O_WRONLY);
	if (fp == NULL)
		return (-1);
	if (text_content == NULL)
		close(fp);
	bytes_written = write(fp, text_content, len);
	if (bytes_written == -1)
		return (-1);
	close(fp);
	return (1);
}
