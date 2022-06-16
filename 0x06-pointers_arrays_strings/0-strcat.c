#include "main.h"
/**
 * * _strcat - appends the two strings
 * @s1: string one, source
 * @s2: string two detination
 * Return: concatnated string
 */
char *_strcat(char *s2, char *s1)
{
	int len = 0;
	int a = -1;

	for (; s2[len] != '\0'; len++)
		;
	do {
		a++;
		s2[len] = s1[a];
		len++;
	} while (s1[a] != '\0');

	return (s2);
}
