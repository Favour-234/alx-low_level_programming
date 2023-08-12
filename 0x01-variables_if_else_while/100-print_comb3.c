#include <stdio.h>
/**
 * main - print combination of two number
 *
 * Return: always 0
 */

int main(void)
{
	int k;
	int j;

	for (k = '0' ; k <= '9' ; k++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			if (k < j)
			{
				putchar(k);
				putchar(j);
				if (k != '8' || (k == '8' && j != '9'))
					putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
