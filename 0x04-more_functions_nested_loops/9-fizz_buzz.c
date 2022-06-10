#include <stdio.h>

/**
 * main - prints the numberfrom 1 to 100
 * but for multiplies of 3 print Fizz
 * multiplies of 5 print Buzz, fori numbers wh are multiplies
 * both print FizzBuzz
 *
 * Return: always success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
		if (i != 100)
			putchar(' ');
	}
	printf("\n")
	return (0);
}
