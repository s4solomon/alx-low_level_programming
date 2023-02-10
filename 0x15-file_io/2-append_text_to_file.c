#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/**
 * Function: append_text_to_file - appends text at the end of a file
 *
 * @filename: file to append to
 * @text_content: text to add at the end of file
 *
 * Return: 1 if success and -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int flags;
	ssize_t n_written;

	if (!filename)
		return (-1);
	flags = O_APPEND | O_WRONLY;
	fd = open(filename, flags);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	n_written = write(fd, text_content, strlen(text_content));
	if (n_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
