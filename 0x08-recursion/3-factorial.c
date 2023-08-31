#include "main.h"

/**
 * factorial - calculate the factorial of the numbers
 * @n: the number
 *
 * Return: the factorial of the number or -1 if n  is negative.
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
