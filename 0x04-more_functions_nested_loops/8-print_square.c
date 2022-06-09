#include "main.h"
/**
 * print_square - prints square
 * @sz: the size of square
 * Return: always success
 */
void print_square(int sz)
{
	int l, b;

	if (sz <= 0)
		_putchar(10);
	for (l = 0; l < sz; l++)
	{
		for (b = 0; b < sz; b++)
			_putchar('#);
		_putchar(10);
	}
}
