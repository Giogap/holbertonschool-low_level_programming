#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**



*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf;

	if (filename == NULL)
	{
		return (NULL);
	}

	fd = open("filename", O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	read(fd, buf, letters);
	close(fd);


	return (0);
}
