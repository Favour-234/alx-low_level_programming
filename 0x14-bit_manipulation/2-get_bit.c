#include "main.h"

/**
 * get_bit - the value of a bit at an index
 * @n: number to search
 * @index: index of the bit
 *
 * Return:the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
