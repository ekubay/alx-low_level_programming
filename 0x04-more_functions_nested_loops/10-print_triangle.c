#include "main.h"
/**
 * print_triangle - prints tiangle
 * @sz: size of the triangle
 * Return: always success
 */
void print_triangle(int sz)
{
	int i, j;

	if (sz <= 0)
		_putchar(10);
	for (i = 0; i < sz; i++)
	{
		for (j = (sz - 1); j >= 0; j--)
		{
			if (j <= i)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}
