#include <stdio.h>
#include "main.h"
/**
 * print_array - print n elements of an array
 * @a: int type array pointer
 * @n: int type integer
 * Return: always success
 * use _putchar to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i< n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
		{
			printf(",");
		}
	}
	printf("\n");
}
