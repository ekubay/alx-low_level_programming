#include "main.h"

/**
 * print_diagonal - draws diagonal lines
 * @n: the length of the diagonal
 * Return: always success
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar(92);
				_putchar(10);
			}
			else
				_putchar(32);
		}
}
