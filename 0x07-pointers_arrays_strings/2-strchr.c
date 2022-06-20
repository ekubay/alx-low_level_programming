#include "main.h"
/**
 * _strchr - locates charcter in a string
 * @s: string pointer
 * @c: charcter to be identified
 * Return: location of the charcter
 */
char *_strchr(char *s, char c)
{
	if (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
