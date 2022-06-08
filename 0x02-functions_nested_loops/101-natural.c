#include <stdio.h>
/**
 * main - lists all number below 1024 that are multiple of 3 and 5
 *  display their sum
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, s = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			s += i;

	}
	printf("%d\n", s);
	return (0);
}
