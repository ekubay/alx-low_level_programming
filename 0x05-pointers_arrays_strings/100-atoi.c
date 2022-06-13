#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: char type string
 * Return: converted integer
 */

int _atoi(char *s)
{
	int sg = 1;
	int re = 0;
	int fnum;
	int i;

	for (fnum = 0; !(s[fnum] >= 48 && s[fnum] <= 57); fnum++)
	{
		if (s[fnum] == '-')
		{
			sg *= -1;
		}
	}
	for (i = fnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		re *= 10;
		re += (s[i] - 48);
	}
	return (sg * re);
}
