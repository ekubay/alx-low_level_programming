#include "main.h"
/**
 * string_toupper - from lowercase to uppercase
 * @s: the string
 * Return: the string
 */
char *string_toupper(char *s)
{
	int l, i = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		;
	}
	while (i < l)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
