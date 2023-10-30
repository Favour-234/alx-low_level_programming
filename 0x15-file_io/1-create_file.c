#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the strings whose length to check
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
 * create_file - create a file
 * @filename: the name of  file to be created
 * @text_content: A null terminate string to write to a file
 * Return: return if successful.
 */

int create_file(const char *filename, char *text_content)
{
	int fa;
	ssize_t byt = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fa = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fa == -1)
		return (-1);

	if (len)
		byt = write(fa, text_content, len);
	close(fa);
	return (byt == len ? 1 : -1);
}
