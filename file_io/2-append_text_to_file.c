#include "main.h"
#include <stddef.h>


int append_text_to_file(const char *filename, char *text_content)
{
	int fb, len= 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fb = open(filename, O_WRONLY | O_APPEN);

	if (fb == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[len])
	{
		len++;
	}

	write(fb, text_content, len);
	close(fb);
	return (1);
}
