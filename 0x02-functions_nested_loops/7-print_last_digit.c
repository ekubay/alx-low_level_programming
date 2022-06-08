#include "main.h"
/**
 * print_last_digit - prinnts the last digit of number
 * @n: digit to find the last place
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ldigit = n % 10;

	if (ldigit < 0)
		ldigit = ldigit * -1;
	_putchar(ldigit + '0');

	return (ldigit);
}
