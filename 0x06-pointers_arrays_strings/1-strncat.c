#include "main.h"

/**
 * _strncat - function to link and connect strings
 * @dest: the destination for the string
 * @src: the source of the string
 * @n: the maximum number of byte to copy from source,
 * Return: return to the dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}
	*dest_end = '\0';
	return (dest);
}
