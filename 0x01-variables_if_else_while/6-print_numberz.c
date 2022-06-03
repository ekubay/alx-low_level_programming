#include <stdio.h>

/**
 * main - Printing digit base 10 using putchr
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');

	return (0);
}
