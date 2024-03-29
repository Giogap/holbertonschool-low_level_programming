#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - check code
 * @filename: name of file
 * @text_content: string
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, lenwr;
	char *buf;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		return (1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}
	buf = malloc(len * sizeof(char));
	if (buf == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	lenwr = write(fd, text_content, len);
	if (lenwr == -1)
	{
		return (-1);
	}
	close(fd);
	free(buf);
	return (1);
}
