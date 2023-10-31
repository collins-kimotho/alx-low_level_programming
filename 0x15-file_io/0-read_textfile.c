#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - reads a text and prints it to the POSIX std output
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of lettrs it courld read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;

	/* if filename is NULL return 0 */
	if (filename == NULL)
		return (0);
	/* open filem if t fails, return 0 */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/* read file, it it fails free buffer, close file and return 0 */
	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* write to POSIX stdout */
	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* free buffer and close file */
	free(buffer);
	close(fd);
	/* return number of letters it could read and print */
	return (write_count);
}
