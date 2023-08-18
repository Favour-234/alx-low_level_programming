#include "main.h"

/**
 * _isdigit - print digit 0 to 9
 * @c: the digit to be checked
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
