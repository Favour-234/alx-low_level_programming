#include "main.h"

/**
 * _strlen - return the sring length of a string
 * @s: the sring length to be checked
 * Return: the integar length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - as the name implies to append to file
 * @filename: the name of the file
 * @text_content: the null to terminate string at the end of file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	ssize_t byt = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fa = open(filename, O_WRONLY | O_APPEND);
	if (fa == -1)
		return (-1);
	if (len)
		byt = write(fa, text_content, len);
	close(fa);

	return (byt == len ? 1 : -1);
}
