#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - check code
 * @filename: name of file
 * @letters: text to read
 * Return: lenwr
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, lenrd, lenwr;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	lenrd = read(fd, buf, letters);
	close(fd);

	if (lenrd == -1)
	{
		free(buf);
		return (0);
	}
	lenwr = write(STDOUT_FILENO, buf, lenrd);
	free(buf);

	if (lenrd != lenwr)
	{
		return (0);
	}
	return (lenwr);
}
