#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/**
 * Function: create_file - creates a file
 *
 * @filename: file to create and write to
 * @text_content: text fo write to file
 *
 * Return: 1 if success and -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int flags;
	int mode;
	ssize_t n_written;

	if (!filename)
		return (-1);
	flags = O_CREAT | O_TRUNC | O_WRONLY;
	mode = S_IWUSR | S_IRUSR;
	fd = open(filename, flags, mode);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	n_written = write(fd, text_content, strlen(text_content));
	if (n_written == -1 || strlen(filename) != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
