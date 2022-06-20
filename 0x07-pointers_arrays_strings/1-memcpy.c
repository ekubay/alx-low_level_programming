#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: always success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
