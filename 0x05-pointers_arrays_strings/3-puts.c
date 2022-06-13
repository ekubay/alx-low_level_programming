#include "main.h"
/**
 * _puts - prints the string
 * @str: pointer to string
 * Return: always success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
