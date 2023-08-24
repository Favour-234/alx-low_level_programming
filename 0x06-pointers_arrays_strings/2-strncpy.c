#include "main.h"

/**
 * _strncpy - copy the string
 * @src: the source of the string
 * @dest: the destination to copy to
 * @n: the maximum number to copy
 * Return: return appropriately
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
