#include <stdio.h>

/**
 * main - print in alphabeticall order
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
