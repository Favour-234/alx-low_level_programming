#include "main.h"

/**
 * _memset - fill the memory with a constant bytes
 * @s: A pointer to memory area to fill the constant byte
 * @b: The constant byte to fill memory
 * @n: The number of byte i want to fix with the constant bytes
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
