#include "main.h"
/**
 * print_last_digit - prinnts the last digit of number
 * @n: digit to find the last place
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
