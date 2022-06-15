#include "main.h"
/**
 * _strncat - concatenates n character from the source
 * @dest: destination string
 * @src: source string
 * @n: number of bytes/charcter form the source
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *p;

	for (len = 0; dest[len] != '\0'; len++)
		;
	p = dest + len;
	while (*src != '\0' && n--)
		*p = *src++;

	*p = '\0';
	return (dest);
}
