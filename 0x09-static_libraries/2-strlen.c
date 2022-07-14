#include "main.h"
/**
 *  * _strlen - prints the length of string
 *   * @s: pointer to string
 *    * Return: always success
 *     */

int _strlen(char *s)
{
		int i = 0;

			while (s[i])
						i++;
				return (i);
}
