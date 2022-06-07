#include <stdio.h>
/**
 * main - entry point
 * Return: Noting, it is void
 */
int main(void)
{
	int i, r;

	for (i = 0; i < 1042; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			r += i;

	}
	printf("%d\n", r);
	return (0);
}
