#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary num to unsigned int
 * @b:a pointer to the string 0 and 1 chars
 *
 * Return: return the number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int joy;
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}

	for (joy = 0; b[joy]; joy++)
	{
		if (b[joy] < '0' || b[joy] > '1')
			return (0);
		result = 2 * result + (b[joy] - '0');
	}

	return (result);
}
