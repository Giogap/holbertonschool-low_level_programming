#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>


int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	char *buf;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open("filename", O_CREAT, 0600);
	}
		
	fd = open("filename", O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);;
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

	fd = open("filename", O_CREAT | O_WRONLY | O_TRUNC);

	if (fd == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
