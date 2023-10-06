#include "main.h"

/**
 * create_file - to create a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the string where the files will be written.
 *
 * Return: If the function fails return -1, Otherwise return 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fn, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(fn, text_content, len);

	if (fn == -1 || n == -1)
		return (-1);

	close(fn);

	return (1);
}
