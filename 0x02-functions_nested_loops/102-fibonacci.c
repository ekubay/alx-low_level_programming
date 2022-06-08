#include <stdio.h>
/**
 * main - prints the furst 50 fibonacci num
 * Return: Always 0 (Success)
 */
int main(void)
{
	int co;
	unsigned long i = 0, j = 1, sum = 0;

	for (co = 0; co < 50; co++)
	{
		sum = i + j;
		printf("%lu", sum);
		i = j;
		j = sum;
		if (co == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
