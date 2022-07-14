#include "main.h"
/**
 *  * _atoi - convert string to integer
 *   * @s: char type string
 *    * Return: converted integer
 *     */

int _atoi(char *s)
{
		int sg = 1;
			int re = 0;

				while (s[0] != '\0')
						{
									if (s[0] == '-')
													sg *= -1;
											else if (s[0] >= '0' && s[0] <= '9')
															re = (re * 10) + (s[0] - '0') * sg;
													else if (re)
																	break;
															s++;
																}
					return (re);
}
