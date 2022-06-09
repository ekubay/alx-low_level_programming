#include <stdio.h>

/**
 * main - prints the largest factor of 612852474143
 * Return: always success
 */
int main(void)
{
	long i = 2, n = 612852475143;

	for (; i <= n; i++)
		if (!(n % i))
		{
			n /= i;
			i--;

		}
	printf("%lu\n", i);
	return (0);
}
