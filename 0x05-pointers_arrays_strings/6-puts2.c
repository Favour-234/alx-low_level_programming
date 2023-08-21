#include "main.h"

/**
 * puts2 - print other character of a string starting with a new line
 * @str: the string
 * return: void
 */

void puts2(char *str)
{
	int i;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (i = 0; i < a; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
