#include "main.h"
/**
 * print_sign - determine either it is +ve, *ve or zero
 * @n: the number to be checked
 * Return: 1 if posotive, 0 if negative and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
