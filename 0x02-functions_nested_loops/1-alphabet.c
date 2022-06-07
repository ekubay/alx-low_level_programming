#include "main.h"

/**
 * print_alphabet - prints all alhabet starting from a to z
 * using function declaration and function call
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;

	}
	_putchar('\n');
}
