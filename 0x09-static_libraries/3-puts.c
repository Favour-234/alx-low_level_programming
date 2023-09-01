#include "main.h"

/**
 * _puts - print the string follow by anew line
 * @str: pointer to the string
 * return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
