#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**



*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	fd = open("filename", O_WRONLY);

	if (fd == -1)
	{
		return (0);
	}
	return (0);
}
