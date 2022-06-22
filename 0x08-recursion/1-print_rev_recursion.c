#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a given string
 * @s: printer to a given sting
 * Return: always success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
