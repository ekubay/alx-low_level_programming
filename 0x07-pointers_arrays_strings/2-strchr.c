#include "main.h"
/**
 * _strchr - locates charcter in a string
 * @s: string pointer
 * @c: charcter to be identified
 * Return: location of the charcter
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
