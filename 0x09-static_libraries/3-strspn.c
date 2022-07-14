#include "main.h"
/**
 *  * _strspn - gets length of the  prifix substring
 *   * @s: segment to compare bytes
 *    * @accept: sting of byte to compare
 *     * Return: always success
 *      */
unsigned int _strspn(char *s, char *accept)
{
		unsigned int i, j;

			i = 0;
				while (s[i] != '\0')
						{
									j = 0;
											while (accept[j] != '\0' && s[i] != accept[j])
															j++;
													while (accept[j] == '\0')
																	return (i);
															i++;
																}
					return (i);
}
