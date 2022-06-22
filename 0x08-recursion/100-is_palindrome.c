#include "main.h"
/**
 * _strlen_recursion - length of the character
 * @s: pinter to the string
 * Return: always success
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * pal - works palindrom
 * @s: pointer to the string
 * @l: position char
 * Return: plandromm
 */
int pal(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (pal(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - checks whether it is pali..
 * @s: pointer to string
 * Return: always success
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal(s, len - 1));
}
