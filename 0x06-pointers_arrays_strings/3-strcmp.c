#include "main.h"

/**
 * _strcmp - compare the strings
 * @s1: first string
 * @s2: second string
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
