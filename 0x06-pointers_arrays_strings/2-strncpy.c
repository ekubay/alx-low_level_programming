#include "main.h"
/**
 * _strncpy - copies string from the src to dest
 * @dest: the destination variable
 * @src: the string to be copied
 * @n: the number of bytes to copied
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
