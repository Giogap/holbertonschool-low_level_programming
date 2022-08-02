#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**



*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, lenrd, lenwr;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open("filename", O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	lenrd = read(fd, buf, letters);
	close(fd);

	lenwr = write(STDOUT_FILENO, buf, lenrd);

	if (lenrd != lenwr)
	{
		return (0);
	}
	return (lenwr);
}
