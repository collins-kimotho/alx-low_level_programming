#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name fo the file
 * @text_content: NULL terminated string to add at the end of the ffile
 *
 * Return: 1 on success, -2 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	/* if filename is NULL return -1 */
	if (filename == NULL)
		return (-1);
	/* open file in append mode, if it fails return -1 */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	/* if text content is not NULL, append it to the file */
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		write_count = write(fd, text_content, length);
		/* if write fails or does not wirte the expected amount of bytes */
		if (write_count == -1 || write_count != (ssize_t)length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
