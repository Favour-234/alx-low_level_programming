#include "main.h"

/**
 * get_bit - to get the value of bit of index
 * @n: to seacrh for index
 * @index: the num of bit of index
 *
 * Return: the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
