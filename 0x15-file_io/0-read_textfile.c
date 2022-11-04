#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * Function: read_textfile - reads text and prints it to POSIX standard output
 *
 * @filename: file to read and print
 * @letters: number of character to read and print
 *
 * Return: actual number of letters to read, 0 if end of file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	free(buf);
	if (w != r)
		return (0);
	return (w);
}
