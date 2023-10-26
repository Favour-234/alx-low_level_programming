#include "main.h"

/**
 * get_endianness - Checking the endianness of my system.
 *
 * Return: return 0 if big endian or 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endianness_check = (char *)&num;

	if (*endianness_check == 1)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
