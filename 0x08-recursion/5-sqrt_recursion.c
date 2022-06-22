#include "main.h"
/**
 * _sqrt_recursion - prints sqrt of a number
 * @n: given input
 * Return: always success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - square root
 * @n: integer input
 * @i: second integer value
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
