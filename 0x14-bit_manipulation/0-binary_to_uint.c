#include "main.h"

/**
 * binary_to_uint - converting a binary number to unsigned int
 * @b: string containing the '0' and '1' binary.
 *
 * Return: return the result. 
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}

	return (result);
}
