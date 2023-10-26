#include "main.h"

/**
 * set_bit - to set the val of bit  to 1 at a given index
 * @n: a pointer
 * @index: the bit val num
 * Return: 1 if it success or -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
