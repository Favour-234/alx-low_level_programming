#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file that is printed to the standard output
 * @filename: text file that is being read
 * @letters: number of letters that is to be read
 * Return: n the actual number of bytes to read and printed
 *       or 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fn;
	ssize_t n;
	ssize_t t;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fn, buf, letters);
	n = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fn);
	return (n);
}
