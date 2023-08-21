#include "main.h"

/**
 * swap_int - swap the integer
 * @a: to be swapped
 * @b: to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
