#include "main.h"

/**
 * _isupper - checks for the uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
