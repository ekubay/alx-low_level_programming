#include "main.h"
/**
 * * _strcat - appends the two strings
 * @s1: string one
 * @s2: string two
 * Return: concatnated string
 */
char *_strcat(char *s2, char *s1)
{
	int len = 0;
	char *temp;

	for (; s2[len] != '\0'; len++)
		;

	temp = s2 + len;
	while (*s1 != '\0')
		*temp++ = *s1++;
	*temp = '\0';

	return (0);
}
