#include "main.h"
/**
 * _strlen_recursion - prints the length of the stirng
 * @s: pointer to the string given
 * Return: always success
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
