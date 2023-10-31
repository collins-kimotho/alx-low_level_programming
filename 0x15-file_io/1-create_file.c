#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file with given content
 * @filename: the name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	/* if filename is NULL return -1 */
	if (filename == NULL)
		return (-1);
	/* create a new file with rw permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	/* if text content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
		write_count = write(fd, text_content, length);
		/* ifwrite fials */
		if (write_count == -1 || write_count != (ssize_t)length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	/* return 1 on success */
	return (1);
}
