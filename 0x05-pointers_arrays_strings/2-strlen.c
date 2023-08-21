#include "main.h"

/**
 * _strlen - print the length of a string
 *@s: the length to print
 * Return: nothing
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
