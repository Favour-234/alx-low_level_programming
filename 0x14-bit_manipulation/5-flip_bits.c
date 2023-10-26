#include "main.h"

/**
 * flip_bits - a program to return the num of bit by flipping
 * @n: where to start
 * @m: where to end
 * Return: return if successful
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
	count += x & 1;
	x >>= 1;
	}

	return (count);
}
