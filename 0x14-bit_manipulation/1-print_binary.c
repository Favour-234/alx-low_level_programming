#include "main.h"
#include <stdio.h>

/**
 * print_binary - a program that print the binary representation of a number
 *
 * @n: the total number to be printed
 */

void print_binary(unsigned long int n)
{
	int fav, liz = 0;
	unsigned long int nw;

	for (fav = 63; fav >= 0; fav--)
	{
		nw = n >> fav;
		if (nw & 1)
		{
			_putchar('1');
			liz++;
		}
		else if (nw)
			_putchar('0');
	}
	if (!nw)
		_putchar('0');
}
