#include <stdio.h>

/**
 * main - print three combination of number
 * Return: always 0
 */

int main(void)
{
	int i = '0';
	int l;
	int m;

	while (i <= '9')
	{
		l = '0';
		while (l <= '9')
		{
			m = '0';
			while (m <= '9')
			{
				if (i < l && l < m)
				{
					putchar(i);
					putchar(l);
					putchar(m);
					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				m++;
			}
			l++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
