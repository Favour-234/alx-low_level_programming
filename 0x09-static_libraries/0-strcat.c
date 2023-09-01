#include "main.h"

/**
 * _strcat - a function tha concatenates two string
 * @dest: the destination of the string
 * @src: the source of the string
 * Return: return pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}
