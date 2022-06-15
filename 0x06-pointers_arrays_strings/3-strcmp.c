#include "main.h"
/**
 * _strcmp - compare 2 string
 * @s1: string one
 * @s2: string two
 * Return: 0 if equal, -ve if s1 < s2 otherwise +ve
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
