#include "main.h"
#include <stdio.h>

/**
 * puts2 - print other character of a string starting with a new line
 * @str: the string
 * return: void
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
