#include "main.h"
/**
 * factorial - prints facterial of any given number
 * @n: any number
 * Return: fuctorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
