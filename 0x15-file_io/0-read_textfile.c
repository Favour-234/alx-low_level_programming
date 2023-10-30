#include "main.h"

/**
 * read_textfile - function to read a text file.
 * @filename: the file to be read
 * @letters: contains the number of bytes to be read
 * Return: return the amount of byte expected.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fa;
	ssize_t byt;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fa = open(filename, O_RDONLY);
	if (fa == -1)
	return (0);
	byt = read(fa, &buf[0], letters);
	byt = write(STDOUT_FILENO, &buf[0],  byt);
	close(fa);

	return (byt);
}
