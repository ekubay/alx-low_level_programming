#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number to determine number of line
 * Return: print n number of lines and new line if n <= 0
 */
void print_line(int n)
{
	int c = 0;

	while ((c < n) && (n > 0))
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
