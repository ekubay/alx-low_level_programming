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
	int i = 0;

	for (len = 0; dest[len] != '\0'; len++)
		;
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
