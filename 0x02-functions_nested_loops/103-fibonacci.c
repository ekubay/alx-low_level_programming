#include <stdio.h>

/**
 * main - prints the sum of even fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fb1 = 0, fb2 = 1, fsum = 0;
	float totalsum = 0;

	while (1)
	{
		fsum = fb1 + fb2;
		if (fsum > 4000000)
			break;
		if ((fsum % 2) == 0)
			totalsum += fsum;

		fb1 = fb2;
		fb2 = fsum;
	}
	printf("%.0f\n", totalsum);
	return (0);
}
