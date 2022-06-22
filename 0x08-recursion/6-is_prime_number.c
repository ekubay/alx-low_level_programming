#include "main.h"
/**
 * helps - helper function
 * @n: paramater
 * @m: paramater
 * Return: success
 */
int helps(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (helps(n + 2, m));
	else
		return (1);
}

/**
 * is_prime_number - checks whether it is prime or not
 * @n: given number
 * Return: success
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (helps(3, n));
}
