#include "main.h"
/**
* create_file - Creates a file.
* @filename: Name of the file 2 create.
* @text_content: Text 2 write in the file.
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, n, i;

	if (!filename)
	{
		return (-1);
	}

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
		{
			;
		}
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	{
		if (fd == -1)
		{
			return (-1);
		}
	}
	n = write(fd, text_content, i);
	{
		if (n == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
