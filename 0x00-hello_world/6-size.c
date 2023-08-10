#include <stdio.h>

/**
 * main - print sizes of various type
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int m;
	float n;

	printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(n));

	return (0);
}
