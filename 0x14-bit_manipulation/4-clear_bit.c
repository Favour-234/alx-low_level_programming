#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: a pointer to the unsigned int
 * @index: The index of the bit to clear start from 0.
 *
 * Return: 1 if successful, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nek = 1UL << index;

	*n = *n & ~nek;
	return (1);

	if (index >= (8 * sizeof(unsigned long int)))
	{
	return (-1);
	}
}
